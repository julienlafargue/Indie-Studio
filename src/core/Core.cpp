/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Core
*/

#include "Core.hpp"
#include "../entity/Button.hpp"
#include "../raylib_encapsulation/Draw.hpp"
#include "../raylib_encapsulation/Rcamera.hpp"
#include "../raylib_encapsulation/Mouse.hpp"
#include "../scene/menu/Menu.hpp"
#include "../scene/game/Game.hpp"
#include "../scene/gameSettings/GameSettings.hpp"
#include "../scene/settings/Settings.hpp"
#include "../scene/commands/CommandsKeyboard.hpp"
#include "../scene/commands/CommandsController.hpp"
#include "../scene/IScene.hpp"

#include <vector>
#include <utility>
#include <algorithm>
#include <memory>
#include <string>
#include <unistd.h>

using namespace indie;

Core::Core() :
  _music("assets/sounds/music.wav")
{
  _window = Window::create();

  std::shared_ptr<Menu> menu = std::make_shared<Menu>();
  std::shared_ptr<Settings> settings = std::make_shared<Settings>();
  std::shared_ptr<Game> game = std::make_shared<Game>(300, 100);
  std::shared_ptr<CommandsKeyboard> commandsKeyboard = std::make_shared<CommandsKeyboard>();
  std::shared_ptr<CommandsController> commandsController = std::make_shared<CommandsController>();
  std::shared_ptr<GameSettings> gameSettings = std::make_shared<GameSettings>();

  std::pair<SCENE_ID, std::shared_ptr<Menu>> menuPair;
  std::pair<SCENE_ID, std::shared_ptr<Settings>> settingsPair;
  std::pair<SCENE_ID, std::shared_ptr<Game>> gamePair;
  std::pair<SCENE_ID, std::shared_ptr<CommandsKeyboard>> commandsKeyboardPair;
  std::pair<SCENE_ID, std::shared_ptr<CommandsController>> commandsControllerPair;
  std::pair<SCENE_ID, std::shared_ptr<GameSettings>> gameSettingsPair;

  menuPair.first = MENU;
  settingsPair.first = SETTINGS;
  gamePair.first = GAME;
  commandsKeyboardPair.first = COMMANDS_KEYBOARD;
  commandsControllerPair.first = COMMANDS_CONTROLLER;
  gameSettingsPair.first = GAME_SETTINGS;

  menuPair.second = menu;
  settingsPair.second = settings;
  gamePair.second = game;
  commandsKeyboardPair.second = commandsKeyboard;
  commandsControllerPair.second = commandsController;
  gameSettingsPair.second = gameSettings;

  _sceneList.insert(menuPair);
  _sceneList.insert(gamePair);
  _sceneList.insert(settingsPair);
  _sceneList.insert(commandsKeyboardPair);
  _sceneList.insert(commandsControllerPair);
  _sceneList.insert(gameSettingsPair);

  _parameters.setMusicVolume(0.1);
  _parameters.setSoundsVolume(0.1);
  _parameters.setCurrentScene(MENU);
  _parameters.setCommandMode(KEYBOARD);

  _gameParameters.setEnabledTimer(false);
  _gameParameters.setNbIA(0);
  _gameParameters.setTimer(150);
  _gameParameters.setNbPLayer(2);
  _gameParameters.setCurrentGameMode(gamemode::GameMode::NORMAL);

  _music.setVolume(_parameters.getMusicVolume());
}

Core::~Core()
{
  Window::destroy(_window);
}

int Core::startCore()
{
  _music.playMusic();
  while (!_window->shouldClose() && _parameters.getCurrentScene() != QUIT)
  {
    _music.setVolume(_parameters.getMusicVolume());
    _music.update();
    _sceneList[_parameters.getCurrentScene()]->changeCoreParameters(_parameters);
    if (_parameters.getCurrentScene() == QUIT)
      break;
    _sceneList[_parameters.getCurrentScene()]->changeGameParameters(_gameParameters);
    _sceneList.at(_parameters.getCurrentScene())->sceneLoop(_gameParameters, _parameters);
  }
  _window->close();
  return (0);
}

void Core::setStatus(int code)
{
  _exitStatus = code;
}

int Core::checkStatus()
{
  if (_exitStatus == 1)
    return (1);
  return (0);
}
