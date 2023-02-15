/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Commands
*/

#include "CommandsController.hpp"
#include "raylib.hpp"

indie::CommandsController::CommandsController() :
  _buttonBack(20,900, "assets/scenes/Commands/littleBackButton.png"),
  _background("assets/scenes/Commands/commandsBackgroundController.png", 1)
{
}

indie::CommandsController::~CommandsController()
{
}

//interface fiunction
void indie::CommandsController::draw()
{
  Draw::beginDrawing();
  Draw::clearBackground(RED);
  _background.drawTexture(Vector2D(0,0));
  _buttonBack.draw();
  Draw::endDrawing();
}

void indie::CommandsController::sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters)
{
  (void)gameParameters;
  (void)coreParameters;

  draw();
}

void indie::CommandsController::changeCoreParameters(indie::CoreParameters &coreParameters)
{
  coreParameters.setCurrentScene(COMMANDS_CONTROLLER);
  if (_buttonBack.isButtonPressed(_mouse))
    coreParameters.setCurrentScene(SCENE_ID::SETTINGS);
}

void indie::CommandsController::changeGameParameters(GameParameters &)
{
}