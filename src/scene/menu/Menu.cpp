/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Menu
*/

#include "Menu.hpp"

indie::Menu::Menu() :
  _gameTitle("assets/scenes/Menu/logo_menu.png", 1),
  _placehold("assets/scenes/Menu/fox_placehold.png", 1),
  _buttonStart(960, 475, "assets/scenes/Menu/ButtonStart.png"),
  _buttonSettings(960, 475 + 175, "assets/scenes/Menu/ButtonSettings.png"),
  _buttonQuit(960, 475 + 350, "assets/scenes/Menu/ButtonExit.png")
{
}

indie::Menu::~Menu()
{
}

//interface functions
void indie::Menu::draw()
{
  Draw::beginDrawing();
  Draw::clearBackground(RAYWHITE);
  _background.draw();
  _gameTitle.drawTexture(Vector2D(450, 50));
  _placehold.drawTexture(Vector2D(50, 500));
  _buttonStart.draw();
  _buttonSettings.draw();
  _buttonQuit.draw();
  Draw::endDrawing();
}

void indie::Menu::changeCoreParameters(indie::CoreParameters &coreParameters)
{
  coreParameters.setCurrentScene(MENU);
  if (_buttonSettings.isButtonPressed(_mouse))
    coreParameters.setCurrentScene(SETTINGS);
  if (_buttonStart.isButtonPressed(_mouse))
    coreParameters.setCurrentScene(GAME_SETTINGS);
  if (_buttonQuit.isButtonPressed(_mouse))
    coreParameters.setCurrentScene(QUIT);
}

void indie::Menu::sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters)
{
  (void)coreParameters;
  (void)gameParameters;
  draw();
}

void indie::Menu::changeGameParameters(GameParameters &)
{
}

//getters

//setters

//member function
