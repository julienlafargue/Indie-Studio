/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** TextWithValue
*/

#include "TextWithValue.hpp"

indie::TextWithValue::TextWithValue(Vector2D position, std::string title, int fontSize) :
  _position(position),
  _title(title, position, fontSize, BLACK),
  _value("NO", Vector2D(0,0), fontSize, BLACK)
{
  _value.setPosition(Vector2D(_title.getPosition().get_x() + _title.getSize(), _title.getPosition().get_y()));
}

indie::TextWithValue::~TextWithValue()
{
}

void indie::TextWithValue::setPosition(Vector2D position)
{
  _title.setPosition(position);
  _value.setPosition(Vector2D(_title.getPosition().get_x() + static_cast<float>(_title.getSize()), _title.getPosition().get_y()));
}

void indie::TextWithValue::setValue(std::string value)
{
  _value.setText(value);
}

void indie::TextWithValue::draw()
{
  _title.draw();
  _value.draw();
}
