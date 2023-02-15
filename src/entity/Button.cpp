/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Button
*/

#include "Button.hpp"
//ctor ~ dtor
indie::Button::Button(float posX, float posY, std::string texturePath) :
  _texture(texturePath, 3),
  _buttonBounds(posX, posY, _texture.getTextureWidth(),
  _texture.getTextureHeight() / 3, WHITE),
  _textureRectangle(0, 0, _texture.getTextureWidth(), _texture.getTextureHeight() / 3, WHITE),
  _buttonState(NORMAL)
{
}

indie::Button::~Button()
{
}

//getters

indie::RectangleShape indie::Button::getTextureRectangleShape() const
{
  return _textureRectangle;
}

indie::RectangleShape indie::Button::getButtonBounds() const
{
  return _buttonBounds;
}

indie::ButtonState indie::Button::getButtonState() const
{
  return _buttonState;
}

float indie::Button::getButtonWidth() const
{
  return _texture.getTextureWidth();
}

float indie::Button::getButtonHeight() const
{
  return _texture.getTextureHeight();
}




//setters
void indie::Button::setTextureRectangleShape(RectangleShape textureRectangle)
{
  _textureRectangle = textureRectangle;
}

void indie::Button::setButtonBounds(RectangleShape buttonBounds)
{
  _buttonBounds = buttonBounds;
}

void indie::Button::setButtonState(ButtonState buttonState)
{
  _buttonState = buttonState;
}

void indie::Button::setButtonPosition(Vector2D position)
{
  _buttonBounds.setPosX(position.get_x());
  _buttonBounds.setPosY(position.get_y());
}


//interface functions
void indie::Button::draw()
{
  Vector2D position(_buttonBounds.getPosX(), _buttonBounds.getPosY());
  _textureRectangle.setPosY(_buttonState * _textureRectangle.getHeight());
  _textureRectangle.DrawTextureRectangle(_texture, position);
}

indie::Vector2D indie::Button::getPosition() const
{
  Vector2D position(_buttonBounds.getPosX(), _buttonBounds.getPosY());
  return position;
}

//member functions

bool indie::Button::isButtonPressed(Mouse mouse)
{
    if (_buttonBounds.isPointInside(mouse.getPosition()))
      _buttonState = HOVERED;
    else
      _buttonState = NORMAL;
    if (mouse.isLeftButtonDown() && _buttonState == HOVERED)
      _buttonState = CLICKED;
    if (mouse.isLeftButtonCLicked() && _buttonState == HOVERED) {
      return true;
    }
    return false;
}

void indie::Button::changeTexture(std::string path)
{
  _texture.unloadTexture();
  _texture.loadTexture(path);
}