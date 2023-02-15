/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Commands
*/

#include "CommandsKeyboard.hpp"
#include <array>
#include "raylib.hpp"

indie::CommandsKeyboard::CommandsKeyboard() :
  _buttonBack(20,900, "assets/scenes/Commands/littleBackButton.png"),
  _background("assets/scenes/Settings/Backgrround.png", 1),
  _orangeFoxBox(Vector2D(75,50), "assets/scenes/Commands/orangeCommandFoxBox.png", std::array<std::string, 5> {"Z", "Q", "S", "D", "E"}),
  _redFoxBox(Vector2D(1025,50), "assets/scenes/Commands/redCommandFoxBox.png", std::array<std::string, 5> {"O", "K", "L", "M", "P"}),
  _greenFoxBox(Vector2D(1025,550), "assets/scenes/Commands/greenCommandFoxBox.png", std::array<std::string, 5> {"^", "<", "v", ">", "CTRL"}),
  _blueFoxBox(Vector2D(75,550), "assets/scenes/Commands/blueCommandFoxBox.png", std::array<std::string, 5> {"8", "4", "5", "6", "9"})
{
}

indie::CommandsKeyboard::~CommandsKeyboard()
{
}

//interface fiunction
void indie::CommandsKeyboard::draw()
{
  Draw::beginDrawing();
  _background.drawTexture(Vector2D(0,-35));
  _orangeFoxBox.draw();
  _redFoxBox.draw();
  _blueFoxBox.draw();
  _greenFoxBox.draw();
  _buttonBack.draw();

  Draw::endDrawing();
}

void indie::CommandsKeyboard::sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters)
{
  (void)gameParameters;
  (void)coreParameters;
  draw();
}

void indie::CommandsKeyboard::changeGameParameters(GameParameters &)
{
}



void indie::CommandsKeyboard::changeCoreParameters(indie::CoreParameters &coreParameters)
{
  coreParameters.setCurrentScene(COMMANDS_KEYBOARD);
  if (_buttonBack.isButtonPressed(_mouse))
    coreParameters.setCurrentScene(SCENE_ID::SETTINGS);
}