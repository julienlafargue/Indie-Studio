/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** GameScene_scene
*/
#include "Game.hpp"
#include "../../raylib_encapsulation/Draw.hpp"
#include "../../entity/player/Gamepad.hpp"
#include "../../raylib_encapsulation/Input.hpp"
#include <vector>
#include <string>

using namespace indie;

Game::Game(float duration, int kills) :
  _camera(Rcamera({7.0f * 2, 22.5f * 2, 16 * 2}, {7.0f * 2, 1.0f * 2, 6.0f * 2}, {0.0f, 0.5 * 2, 0.0f}, 45.0f, CAMERA_PERSPECTIVE)),
  _map(), _pause(), _background("assets/scenes/Settings/Backgrround.png", 1)
{
  _mouse = Mouse();
  _duration = duration;
  _kills = kills;
  _status = gamestatus::GameStatus::UNLAUNCHED;
}

Game::~Game()
{
}

void indie::Game::launchNormalMode(GameParameters &gameParameters)
{
    _timeStart = std::chrono::steady_clock::now();
    for (int i = 0; i < gameParameters.getNbPLayer() + gameParameters.getNbIA(); i++)
      _playerTab.push_back(indie::Player(i + 1, 3));
    _map.generate(gameParameters.getCurrentGameMode());
    _status = gamestatus::GameStatus::RUNNING;
    gameParameters.setNbPlayerAtLaunch(gameParameters.getNbPLayer());
}

void indie::Game::launchSuddenDeathMode(GameParameters &gameParameters)
{
    gameParameters.setEnabledTimer(false);
    gameParameters.setTimer(-1);

    gameParameters.setCurrentGameMode(gamemode::SUDDENDEATH);
    for (int i = 0; i < gameParameters.getNbPLayer() + gameParameters.getNbIA(); i++) {
      _playerTab.push_back(indie::Player(i + 1, 3));
      _playerTab[i].setSpeedMult(1);
    }
    _map.generate(gameParameters.getCurrentGameMode());
    _status = gamestatus::GameStatus::RUNNING;
    gameParameters.setNbPlayerAtLaunch(gameParameters.getNbPLayer());
}


void indie::Game::sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters)
{
  _hud.setEnableTimer(gameParameters.getEnableTimer());
  _hud.updateTimerValue(gameParameters.getTimer());


  if (_status == gamestatus::GameStatus::UNLAUNCHED) {
    if (gameParameters.getCurrentGameMode() == gamemode::NORMAL)
      launchNormalMode(gameParameters);
    else
      launchSuddenDeathMode(gameParameters);
  }

  if (gameParameters.getTimer() == 0) {
    _playerTab.clear();
    _map.clearMap();
    launchSuddenDeathMode(gameParameters);
  }

  if (Input::isKeyPressed(KEY_ESCAPE) && _status != gamestatus::GameStatus::WON)
    _status == gamestatus::GameStatus::PAUSED ? _status = gamestatus::GameStatus::RUNNING : _status = gamestatus::GameStatus::PAUSED;
  for (int i = 0; i < gameParameters.getNbPLayer(); i++) {
    if (coreParameters.getCommandMode() == CONTROLLER && _playerTab[i].checkButtonPressed(GAMEPAD_BUTTON_MIDDLE_RIGHT))
      _status == gamestatus::GameStatus::PAUSED ? _status = gamestatus::GameStatus::RUNNING : _status = gamestatus::GameStatus::PAUSED;
  }
  if (_status == gamestatus::GameStatus::RUNNING) {
    _timeNow = std::chrono::steady_clock::now();
    checkCollisions(gameParameters, coreParameters);
    for (int i = 0; i < gameParameters.getNbPLayer(); i++)
      _hud.updateFoxBoxValues(_playerTab[i], gameParameters.getNbPlayerAtLaunch());
    if (_playerTab.size() == 1) {
      setIdWinner(_playerTab[0].getPlayerId());
      _status = gamestatus::GameStatus::WON;
    }
  }
  draw();
  if (_status == gamestatus::GameStatus::PAUSED)
    _status = _pause.pauseGame(_mouse);
  if (_status == gamestatus::GameStatus::WON) {
    _winMenu.setFox(getIdWinner());
    _status = _winMenu.sceneSwitcher(_mouse);
  }
}

void Game::draw()
{
  _camera.update();
  Draw::beginDrawing();
  Draw::clearBackground(RAYWHITE);
  _background.drawTexture(Vector2D(0,0));
  Draw::beginMode3D(_camera.getCamera());
  drawPlayers();
  _map.draw();
  Draw::endMode3D();
  _hud.draw();
  if (_status == gamestatus::GameStatus::PAUSED) {
    _pause.drawPauseMenu();
  }
  if (_status == gamestatus::GameStatus::WON) {
    _winMenu.draw();
  }
  Draw::endDrawing();
}

int Game::handleEvent()
{
  return (0);
}

void Game::changeCoreParameters(CoreParameters &coreParameters)
{
  coreParameters.setCurrentScene(GAME);
  if (_status == gamestatus::GameStatus::EXIT)
  {
    _status = gamestatus::GameStatus::UNLAUNCHED;
    coreParameters.stopGame();
    _playerTab.clear();
    _map.clearMap();
    coreParameters.setCurrentScene(MENU);
  }
  else if (_status == gamestatus::GameStatus::SETTINGS)
  {
    _status = gamestatus::GameStatus::PAUSED;
    coreParameters.setCurrentScene(SCENE_ID::SETTINGS);
  } else if (_status == gamestatus::GameStatus::UNLAUNCHED) {
      coreParameters.stopGame();
      _playerTab.clear();
      _map.clearMap();
  }
}

void indie::Game::changeGameParameters(GameParameters &gameParameters)
{
  if (std::chrono::duration_cast<std::chrono::seconds>(_timeNow - _timeStart).count() >= 1 && gameParameters.getTimer() > 0) {
    gameParameters.setTimer(gameParameters.getTimer() - 1);
    _timeStart = _timeNow;
  }
}

void Game::drawPlayers()
{
  for (auto iterator = _playerTab.begin(); iterator < _playerTab.end(); iterator++)
    if (iterator->isAlive() == false)
      _playerTab.erase(iterator);
  for (size_t i = 0; i < _playerTab.size(); i++)
    _playerTab[i].draw();
}

void Game::checkCollisions(GameParameters &gameParameters, CoreParameters &coreParameters)
{
  for (int i = 0; i < gameParameters.getNbPLayer(); i++) {
    _playerTab[i].movePlayer(coreParameters.getCommandMode(), _entityList);
    _playerTab[i].updateBomb(_entityList);
  }
  for (size_t i = 0; i < _map.getCrateTab().size(); i++)
    _map.getCrateTab()[i].checkCollisions(_entityList);
  _map.checkBoostCollision(_playerTab);
  _map.destroyCrate();
  updateEntityList();
}

void Game::updateEntityList()
{
  _entityList.clear();
  for (size_t i = 0; i < _map.getCrateTab().size(); i++)
    _entityList.push_back(_map.getCrateTab()[i].getCollider());
  for (size_t i = 0; i < _map.getMapTab().size(); i++)
    _entityList.push_back(_map.getMapTab()[i].getCollider());
  // for (size_t i = 0; i < _map.getBoost().size(); i++)
  //   _entityList.push_back(_map.getBoost()[i].getCollider());
  for (size_t i = 0; i != _playerTab.size(); i++) {
    _entityList.push_back(_playerTab[i].getCollider());
    for (size_t j = 0; j < _playerTab[i].getBombTab().size(); j++) {
      if (_playerTab[i].getBombTab()[j].isPlaced()) {
        for (size_t h = 0; h < _playerTab[i].getBombTab()[j].getBlowTab().size(); h++)
          _entityList.push_back(Collider(_playerTab[i].getBombTab()[j].getBlowTab()[h].getBoundingBox(), _playerTab[i].getBombTab()[j].getBlowTab()[h].getID()));
      }
    }
  }
}

void Game::setIdWinner(int id)
{
  _idWinner = id;
}

int Game::getIdWinner() const
{
  return (_idWinner);
}

