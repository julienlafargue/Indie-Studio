/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** WinMenu
*/

#include "WinMenu.hpp"

indie::WinMenu::WinMenu() :
_buttonBackMenu(765, 700, "assets/scenes/Menu/ButtonExit.png"),
_buttonRestart(765, 550, "assets/scenes/Menu/ButtonStart.png"),
_foxName("JULIUS WON !!", Vector2D(725, 450), 65, BLACK),
_background("assets/scenes/Settings/Backgrround.png", 1),
_foxBox("assets/scenes/BigEmptyHeightBox.png", 1),
_fox("assets/scenes/endScreen/orangeWin.png", 1)
{
}

indie::WinMenu::~WinMenu()
{
}

void indie::WinMenu::setFox(int foxId)
{
  if (foxId == 1)
    return;
  _fox.unloadTexture();
  if (foxId == 2) {
    _fox.loadTexture(std::string("assets/scenes/endScreen/redWin.png"));
    _foxName.setText(std::string("KANTUS WON !!"));
  }
  if (foxId == 3) {
    _fox.loadTexture(std::string("assets/scenes/endScreen/blueWin.png"));
    _foxName.setText(std::string("ARTHUS WON !!"));
  }
  if (foxId == 4) {
    _fox.loadTexture(std::string("assets/scenes/endScreen/greenWin.png"));
    _foxName.setText(std::string("ALEXUS WON !!"));

  }
}

void indie::WinMenu::draw()
{
  _background.drawTexture(Vector2D(0,0));
  _foxBox.drawTexture(Vector2D(675, 50));
  _fox.drawTexture(Vector2D(745, 100));
  _foxName.draw();
  _buttonBackMenu.draw();
  _buttonRestart.draw();
}

indie::gamestatus::GameStatus indie::WinMenu::sceneSwitcher(Mouse mouse)
{
  if (_buttonBackMenu.isButtonPressed(mouse)) {
    return gamestatus::EXIT;
  }
  if (_buttonRestart.isButtonPressed(mouse)) {
    return gamestatus::UNLAUNCHED;
  }
  return gamestatus::WON;
}

