/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** LineShape
*/

#include "LineShape.hpp"

indie::LineShape::LineShape(int startPosX, int startPosY, int endPosX, int endPosY, Color color)
{
	_posX1 = startPosX;
	_posY1 = startPosY;
	_posX2 = endPosX;
	_posY2 = endPosY;
	_color = color;
}

indie::LineShape::~LineShape()
{
}

void indie::LineShape::DrawShape()
{
	DrawLine(_posX1, _posY1, _posX2, _posY2, _color);
}