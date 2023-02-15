/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** ScrollableValue
*/

#include "ScrollableValue.hpp"

indie::ScrollableValue::ScrollableValue(Vector2D position, std::string title, bool enableBox) :
  _title(title, position, 50, BLACK),
  _buttonDecrease(0, 0, "assets/scenes/Settings/leftArrow.png"),
  _buttonIncrease(0, 0,"assets/scenes/Settings/rightArrow.png"),
  _position(position),
  _textValue(std::to_string(0), Vector2D(0, 0), 50, BLACK),
  _box("assets/scenes/EmptyBox.png", 1),
  _isBox(enableBox)
{
  _buttonDecrease.setButtonPosition(Vector2D((position.get_x() + _title.getFontSize() * _title.getTextLength() - 10), position.get_y()));
  _textValue.setPosition(Vector2D(_buttonDecrease.getButtonBounds().getPosX() + _buttonDecrease.getButtonWidth() + 10, _buttonDecrease.getButtonBounds().getPosY()));
  _buttonIncrease.setButtonPosition(Vector2D(_textValue.getPosition().get_x() + _textValue.getSize() + 10, position.get_y()));
}

indie::ScrollableValue::ScrollableValue(Vector2D position, std::string title, std::string boxSizePath, bool enableBox) :
  _title(title, position, 50, BLACK),
  _buttonDecrease(0, 0, "assets/scenes/Settings/leftArrow.png"),
  _buttonIncrease(0, 0,"assets/scenes/Settings/rightArrow.png"),
  _position(position),
  _textValue(std::to_string(0), Vector2D(0, 0), 50, BLACK),
  _box(boxSizePath, 1),
  _isBox(enableBox)
{
  _buttonDecrease.setButtonPosition(Vector2D((position.get_x() + _title.getFontSize() * _title.getTextLength() - 10), position.get_y()));
  _textValue.setPosition(Vector2D(_buttonDecrease.getButtonBounds().getPosX() + _buttonDecrease.getButtonWidth() + 10, _buttonDecrease.getButtonBounds().getPosY()));
  _buttonIncrease.setButtonPosition(Vector2D(_textValue.getPosition().get_x() + _textValue.getSize() + 10, position.get_y()));
}

indie::ScrollableValue::~ScrollableValue()
{
}

void indie::ScrollableValue::setTitle(std::string title)
{
  _title.setText(title);
}

void indie::ScrollableValue::setPosition(Vector2D position)
{
  _position = position;
}

indie::Vector2D indie::ScrollableValue::getPosition()
{
  return _position;
}

void indie::ScrollableValue::draw()
{
  if (_isBox)
    _box.drawTexture(Vector2D(_title.getPosition().get_x() - 30,_title.getPosition().get_y() - 26));
  _title.draw();
  _buttonDecrease.draw();
  _buttonIncrease.draw();
  _textValue.draw();
}

float indie::ScrollableValue::modifyValue(float value, float min, float max, float scale)
{
  if (value < 0)
    value = 0;
  if (value > 0 && value < 0.1)
    value = 0;
  if (_buttonIncrease.isButtonPressed(_mouse)) {
    if (value < max)
      value += scale;
  }
  if (_buttonDecrease.isButtonPressed(_mouse)) {
    if (value > min)
      value -= scale;
  }
  _textValue.setText(std::to_string(static_cast<size_t> (value * 10)));
  _buttonIncrease.setButtonPosition(Vector2D(_textValue.getPosition().get_x() + _textValue.getSize() + 10, _buttonDecrease.getPosition().get_y()));
  return value;
}

int indie::ScrollableValue::modifyValue(int value, float min, float max, float scale)
{
  if (value < 0)
    value = 0;
  if (value > 0 && value < 0.1)
    value = 0;
  if (_buttonIncrease.isButtonPressed(_mouse)) {
    if (value < max)
      value += scale;
  }
  if (_buttonDecrease.isButtonPressed(_mouse)) {
    if (value > min)
      value -= scale;
  }
  _textValue.setText(std::to_string(value));
  _buttonIncrease.setButtonPosition(Vector2D(_textValue.getPosition().get_x() + _textValue.getSize() + 10, _buttonDecrease.getPosition().get_y()));
  return value;
}
