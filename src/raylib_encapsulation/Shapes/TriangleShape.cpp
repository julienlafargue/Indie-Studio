/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** TriangleShape
*/

#include "TriangleShape.hpp"

indie::TriangleShape::TriangleShape(Vector2D v1, Vector2D v2, Vector2D v3, Color color) : _v1(v1), _v2(v2), _v3(v3)
{
	_color = color;
}

indie::TriangleShape::~TriangleShape()
{
}

void indie::TriangleShape::DrawShape()
{
	DrawTriangle(_v1.getVector(), _v2.getVector(), _v3.getVector(), _color);
}

bool indie::TriangleShape::isPointInside(Vector2D point)
{
	return (CheckCollisionPointTriangle(point.getVector(), _v1.getVector(), _v2.getVector(), _v3.getVector()));
}