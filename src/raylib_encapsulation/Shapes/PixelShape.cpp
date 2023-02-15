/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** PixelShape
*/

#include "PixelShape.hpp"

indie::PixelShape::PixelShape(int posX, int posY, Color color)
{
	_posX = posX;
	_posY = posY;
	_color = color;
}

indie::PixelShape::~PixelShape()
{
}

void indie::PixelShape::DrawShape()
{
	DrawPixel(_posX, _posY, _color);
}