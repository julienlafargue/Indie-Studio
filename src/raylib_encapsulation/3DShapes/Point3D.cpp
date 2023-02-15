/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Point3D
*/

#include "Point3D.hpp"

using namespace indie;

Point3D::Point3D(Vector3D position, Color color) : _position(position)
{
  _color = color;
}

Point3D::~Point3D()
{
}

void Point3D::drawPoint3D()
{
  DrawPoint3D(_position.getVector(), _color);
}

void Point3D::setPosition(Vector3D position)
{
  _position = position;
}

void Point3D::setColor(Color color)
{
  _color = color;
}

Vector3D Point3D::getPosition()
{
  return(_position);
}

Color Point3D::getColor()
{
  return(_color);
}