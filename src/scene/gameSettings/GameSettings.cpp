/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** GameSettings
*/

#include "GameSettings.hpp"

indie::GameSettings::GameSettings() :
 _enableTimerButton(100,550, "assets/scenes/GameSettings/buttonOk.png"),
 _scrollableTimer(Vector2D(100, 400), "TIMER", false),
 _scrollableNbIA(Vector2D(100, 100), "NB IA", false),
 _scrollableNbPlayer(Vector2D(100, 250), "NB PLAYER", false),
 _gameModeButton(100,700, "assets/scenes/GameSettings/gameModeNormalButton.png"),
 _backButton(35,900, "assets/scenes/Settings/backButton.png"),
 _startGameButton(1410,900, "assets/scenes/Menu/ButtonStart.png"),
 _parametersBox("assets/scenes/BigEmptyHeightBox.png", 1),
 _background("assets/scenes/Settings/Backgrround.png", 1),
 _howToPlay(Vector2D(710, 35), gamemode::GameMode::NORMAL),
 _canStart(true),
 _isTimerEnabled(false)
{
}

indie::GameSettings::~GameSettings()
{
}

//interface functions
void indie::GameSettings::draw()
{
  BeginDrawing();
  Draw::clearBackground(GRAY);
  _background.drawTexture(Vector2D(0,0));
  _parametersBox.drawTexture(Vector2D(35,35));
  _howToPlay.draw();
  if (_isTimerEnabled)
    _scrollableTimer.draw();
  _enableTimerButton.draw();
  _scrollableNbIA.draw();
  _scrollableNbPlayer.draw();
  _backButton.draw();
  _gameModeButton.draw();
  if (_canStart)
    _startGameButton.draw();
  EndDrawing();
}

void indie::GameSettings::changeCoreParameters(CoreParameters &coreParameters)
{
  coreParameters.setCurrentScene(GAME_SETTINGS);
  if (_backButton.isButtonPressed(_mouse))
    coreParameters.setCurrentScene(SCENE_ID::MENU);
  if (_startGameButton.isButtonPressed(_mouse) && _canStart) {
    coreParameters.launchGame();
    coreParameters.setCurrentScene(GAME);
  }
} 

void indie::GameSettings::changeGameParameters(GameParameters &gameParameters)
{
  _isTimerEnabled = gameParameters.getEnableTimer();
  gameParameters.setNbPLayer(_scrollableNbPlayer.modifyValue(gameParameters.getNbPLayer(), 0, 4, 1));
  int max = 4 - gameParameters.getNbPLayer();
  if (gameParameters.getNbIA() > max)
    gameParameters.setNbIA(max);
  gameParameters.setTimer(_scrollableTimer.modifyValue(gameParameters.getTimer(), 10, 150, 10));
  gameParameters.setNbIA(_scrollableNbIA.modifyValue(gameParameters.getNbIA(), 0, max, 1));
  if (gameParameters.getNbIA() + gameParameters.getNbPLayer() < 2)
    _canStart = false;
  else
    _canStart = true;
  if (_gameModeButton.isButtonPressed(_mouse)) {
    if (gameParameters.getCurrentGameMode() == gamemode::GameMode::NORMAL) {
      if (_isTimerEnabled) {
        _enableTimerButton.changeTexture("assets/scenes/GameSettings/buttonOk.png");
        gameParameters.setEnabledTimer(false);
      }
      gameParameters.setCurrentGameMode(gamemode::GameMode::SUDDENDEATH);
      _gameModeButton.changeTexture("assets/scenes/GameSettings/gameModeSDButton.png");
      _howToPlay.setGamemode(gameParameters.getCurrentGameMode());
    } else {
      gameParameters.setCurrentGameMode(gamemode::GameMode::NORMAL);
      _gameModeButton.changeTexture("assets/scenes/GameSettings/gameModeNormalButton.png");
      _howToPlay.setGamemode(gameParameters.getCurrentGameMode());
    }
  }
  if (_enableTimerButton.isButtonPressed(_mouse) && gameParameters.getCurrentGameMode() != gamemode::SUDDENDEATH) {
    if (_isTimerEnabled == false)
      _enableTimerButton.changeTexture("assets/scenes/GameSettings/buttonNotOk.png");
    else
      _enableTimerButton.changeTexture("assets/scenes/GameSettings/buttonOk.png");
    gameParameters.setEnabledTimer(!gameParameters.getEnableTimer());
  }

}

void indie::GameSettings::sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters)
{
  (void)coreParameters;
  (void)gameParameters;
  draw();
}
