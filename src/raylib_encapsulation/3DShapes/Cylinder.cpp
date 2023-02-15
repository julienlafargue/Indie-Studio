/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Cylinder
*/

#include "Cylinder.hpp"

using namespace indie;

Cylinder::Cylinder(Vector3D position, float radiusTop, float radiusBottom, float height, int slices, Color color) : _position(position), _color(color)
{
  _radiusTop = radiusTop;
  _radiusBottom = radiusBottom;
  _height = height;
  _slices = slices;
}

Cylinder::~Cylinder()
{
}

void Cylinder::drawCylinder()
{
  DrawCylinder(_position.getVector(), _radiusTop, _radiusBottom, _height, _slices, _color);
}

//SETTTERS

void Cylinder::setPosition(Vector3D position)
{
  _position = position;
}

void Cylinder::setRadiusTop(float radiusTop)
{
  _radiusTop = radiusTop;
}

void Cylinder::setRadiusBottom(float radiusBottom)
{
  _radiusBottom = radiusBottom;
}

void Cylinder::setHeight(float height)
{
  _height = height;
}

void Cylinder::setSlices(int slices)
{
  _slices = slices;
}

void Cylinder::setColor(Color color)
{
  _color = color;
}

//GETTERS

Vector3D Cylinder::getPosition()
{
  return(_position);
}

float Cylinder::getRadiusTop()
{
  return(_radiusTop);
}

float Cylinder::getRadiusBottom()
{
  return(_radiusBottom);
}

float Cylinder::getHeight()
{
  return(_height);
}

int Cylinder::getSlices()
{
  return(_slices);
}

Color Cylinder::getColor()
{
  return(_color);
}