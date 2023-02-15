/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** FoxBoxKeyboard
*/

#include "FoxBoxKeyboard.hpp"

indie::FoxBoxKeyboard::FoxBoxKeyboard(Vector2D position, std::string foxBoxPath, std::array<std::string, 5> keyboardBindedTouch) :
  _foxBox(foxBoxPath, 1),
  _position(position),
  _keyUpText(keyboardBindedTouch[0].c_str(), Vector2D(position.get_x() + 190, position.get_y() + 220), 50, RED),
  _keyLeftText(keyboardBindedTouch[1].c_str(), Vector2D(position.get_x() + 190, position.get_y() + 290), 50, RED),
  _keyDownText(keyboardBindedTouch[2].c_str(), Vector2D(position.get_x() + 435, position.get_y() + 220), 50, RED),
  _keyRightText(keyboardBindedTouch[3].c_str(), Vector2D(position.get_x() + 435, position.get_y() + 290), 50, RED),
  _keyPutBomb(keyboardBindedTouch[4].c_str(), Vector2D(position.get_x() + 650, position.get_y() + 270), 50, RED)
{
}

indie::FoxBoxKeyboard::~FoxBoxKeyboard()
{
}

void indie::FoxBoxKeyboard::draw()
{
  _foxBox.drawTexture(_position);
  _keyUpText.draw();
  _keyLeftText.draw();
  _keyDownText.draw();
  _keyRightText.draw();
  _keyPutBomb.draw();

}
