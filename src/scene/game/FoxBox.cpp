/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** FoxBox
*/

#include "FoxBox.hpp"

indie::FoxBox::FoxBox(Vector2D position, std::string boxFoxPath, std::string title) :
_position(position),
_title(title, Vector2D(0,0), 50, BLACK),
_bombStrengthText(Vector2D(0,0), "RANGE: ", 20),
_numberOfBombText(Vector2D(0,0), "NB BOMB: ", 20),
_speedText(Vector2D(0,0), "SPEED: ", 20),
_canWallPassText(Vector2D(0,0), "WALLPASS: ", 20),
_boxFox(boxFoxPath, 1)
{
  _title.setPosition(Vector2D(_position.get_x() + 150, _position.get_y() + 45));
  _bombStrengthText.setPosition(Vector2D(_position.get_x() + 40, _position.get_y() + 150));
  _numberOfBombText.setPosition(Vector2D(_position.get_x() + 200, _position.get_y() + 150));
  _speedText.setPosition(Vector2D(_position.get_x() + 40, _position.get_y() + 250));
  _canWallPassText.setPosition(Vector2D(_position.get_x() + 200, _position.get_y() + 250));

}

indie::FoxBox::~FoxBox()
{
}

void indie::FoxBox::setPosition(Vector2D position)
{
  _position = position;
}

indie::Vector2D indie::FoxBox::getPosition() const
{
  return _position;
}

void indie::FoxBox::draw()
{
  _boxFox.drawTexture(_position);
  _title.draw();
  _bombStrengthText.draw();
  _speedText.draw();
  _numberOfBombText.draw();
  _canWallPassText.draw();

}

void indie::FoxBox::setSpeedText(std::string speedText)
{
  _speedText.setValue(speedText);
}

void indie::FoxBox::setBombStrengthText(std::string bombStrengthText)
{
  _bombStrengthText.setValue(bombStrengthText);
}

void indie::FoxBox::setCanWallPassText(std::string canWallPass)
{
  _canWallPassText.setValue(canWallPass);
}

void indie::FoxBox::setNumberOfBombText(std::string numberOfBomb)
{
  _numberOfBombText.setValue(numberOfBomb);
}
