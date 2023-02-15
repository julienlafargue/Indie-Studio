/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Settings
*/

#include "Settings.hpp"
#include "raylib.hpp"

indie::Settings::Settings() :
 _background("assets/scenes/Settings/Backgrround.png", 1),
 _buttonBack(760,900, "assets/scenes/Settings/backButton.png"),
 _buttonCommands(70,250 - 26, "assets/scenes/Settings/buttonCommands.png"),
 _buttonSwitchCommandMode(70, 400 - 26, "assets/scenes/Settings/switchCommandButtonKeyboard.png"),
 _musicVolume(Vector2D(100, 100), "MUSIC", true)
{
}

indie::Settings::~Settings()
{
}

//interface functions
void indie::Settings::draw()
{
  Draw::beginDrawing();
  Draw::clearBackground(GRAY);
  _background.drawTexture(Vector2D(0,0));
  _musicVolume.draw();
  _buttonBack.draw();
  _buttonCommands.draw();
  _buttonSwitchCommandMode.draw();
  Draw::endDrawing();
}

void indie::Settings::changeCoreParameters(CoreParameters &coreParameters)
{
  coreParameters.setCurrentScene(SETTINGS);
  coreParameters.setMusicVolume(_musicVolume.modifyValue(coreParameters.getMusicVolume(), 0, 1.0, 0.1));
  if (_buttonBack.isButtonPressed(_mouse) && coreParameters.isGameLaunched() == false)
    coreParameters.setCurrentScene(SCENE_ID::MENU);
  if (_buttonBack.isButtonPressed(_mouse) && coreParameters.isGameLaunched() != false)
    coreParameters.setCurrentScene(SCENE_ID::GAME);
  if (_buttonSwitchCommandMode.isButtonPressed(_mouse)) {
    if (coreParameters.getCommandMode() == KEYBOARD) {
      coreParameters.setCommandMode(CONTROLLER);
      _buttonSwitchCommandMode.changeTexture("assets/scenes/Settings/switchCommandButtonController.png");
    } else {
      _buttonSwitchCommandMode.changeTexture("assets/scenes/Settings/switchCommandButtonKeyboard.png");
      coreParameters.setCommandMode(KEYBOARD);
    }
  }
  if (_buttonCommands.isButtonPressed(_mouse)) {
    if (coreParameters.getCommandMode() == KEYBOARD) {
      coreParameters.setCurrentScene(COMMANDS_KEYBOARD);
    } else {
      coreParameters.setCurrentScene(COMMANDS_CONTROLLER);
    }
  }
} 

void indie::Settings::sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters)
{
  (void)coreParameters;
  (void)gameParameters;
  draw();
}

void indie::Settings::changeGameParameters(GameParameters &)
{
}