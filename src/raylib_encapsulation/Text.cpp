/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Text
*/

#include "Text.hpp"
#include <string>

indie::Text::Text(std::string text, Vector2D position, int size, Color color) : _text(text), _position(position), _fontSize(size), _color(color)
{
}

indie::Text::~Text()
{

}

unsigned int indie::Text::getTextLength() const
{
	return (TextLength(_text.c_str()));
}

int indie::Text::getFontSize() const
{
	return ((_fontSize * 12) / 16);
}

void indie::Text::setPosition(Vector2D position)
{
  _position = position;
}

indie::Vector2D indie::Text::getPosition() const
{
    return _position;
}

void indie::Text::draw()
{
    DrawText(_text.c_str(), _position.get_x(), _position.get_y(), _fontSize, _color);
}

void indie::Text::setText(std::string text)
{
    _text = text;
}

void indie::Text::setSize(int size)
{
    _fontSize = size;
}

void indie::Text::setColor(Color color)
{
    _color = color;
}

float indie::Text::getSize() const
{
    return static_cast<float> (MeasureText(_text.c_str(), _fontSize));
}
