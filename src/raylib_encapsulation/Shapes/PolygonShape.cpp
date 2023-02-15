/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** PolygonShape
*/

#include "PolygonShape.hpp"

using namespace indie;

PolygonShape::PolygonShape(Vector2D center, int sides, float radius, float rotation, Color color) : _center(center)
{
	_sides = sides;
	_radius = radius;
	_rotation = rotation;
	_color = color;
}

PolygonShape::~PolygonShape()
{
}

void indie::PolygonShape::DrawShape()
{
	DrawPoly(_center.getVector(), _sides, _radius, _rotation, _color);
}



