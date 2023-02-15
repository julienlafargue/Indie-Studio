/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** CircleShape
*/

#include "CircleShape.hpp"

indie::CircleShape::CircleShape(int centerX, int centerY, float radius, Color color) : _center(centerX, centerY)
{
	_radius = radius;
	_color = color;
}

indie::CircleShape::~CircleShape()
{
}

void indie::CircleShape::DrawShape()
{
	DrawCircle(_center.get_x(), _center.get_y(), _radius, _color);
}

bool indie::CircleShape::isPointInside(Vector2D point)
{
	return (CheckCollisionPointCircle(point.getVector(), _center.getVector(), _radius));
}