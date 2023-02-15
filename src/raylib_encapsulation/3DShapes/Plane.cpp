/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Plane
*/

#include "Plane.hpp"

using namespace indie;

Plane::Plane(Vector3D centerPos, Vector2D size, Color color) : _centerPos(centerPos), _size(size)
{
  _color = color;
}

Plane::~Plane()
{
}

void Plane::drawPlane()
{
  DrawPlane(_centerPos.getVector(), _size.getVector(), _color);
}

//SETTERS

void Plane::setCenterPos(Vector3D centerPos)
{
  _centerPos = centerPos;
}

void Plane::setSize(Vector2D size)
{
  _size = size;
}

void Plane::setColor(Color color)
{
  _color = color;
}

//GETTERS

Vector3D Plane::getCenterPos()
{
  return(_centerPos);
}

Vector2D Plane::getSize()
{
  return(_size);
}

Color Plane::getColor()
{
  return(_color);
}