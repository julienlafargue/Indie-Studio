/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** RectangleShape
*/

#include "RectangleShape.hpp"

indie::RectangleShape::RectangleShape(float posX, float posY, float width, float height, Color color)
{
	_rectangle.x = posX;
	_rectangle.y = posY;
	_rectangle.width = width;
	_rectangle.height = height;
	_color = color;
}

indie::RectangleShape::~RectangleShape()
{
}

//getters
float indie::RectangleShape::getPosX() const
{
	return _rectangle.x;
}

float indie::RectangleShape::getPosY() const
{
	return _rectangle.y;
}

float indie::RectangleShape::getWidth() const
{
	return _rectangle.width;
}

float indie::RectangleShape::getHeight() const
{
	return _rectangle.height;
}

//setters
void indie::RectangleShape::setPosX(float x)
{
	_rectangle.x = x;
}

void indie::RectangleShape::setPosY(float y)
{
	_rectangle.y = y;
}

void indie::RectangleShape::setWidth(float width)
{
	_rectangle.width = width;
}

void indie::RectangleShape::setHeight(float height)
{
	_rectangle.height = height;
}

void indie::RectangleShape::DrawShape()
{
	DrawRectangle(_rectangle.x, _rectangle.y, _rectangle.width, _rectangle.height, _color);
}

void indie::RectangleShape::DrawTextureRectangle(TwoDTexture &texture, Vector2D position)
{
  DrawTextureRec(texture.getTexture(), _rectangle, position.getVector(), _color);
}

bool indie::RectangleShape::isPointInside(Vector2D point)
{
	return(CheckCollisionPointRec(point.getVector(), _rectangle)); 
}