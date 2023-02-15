/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Sphere
*/

#include "Sphere.hpp"

using namespace indie;

Sphere::Sphere(Vector3D centerPos, float radius, Color color) : _centerPos(centerPos)
{
  _radius = radius;
  _color = color;
}

Sphere::~Sphere()
{
}

void Sphere::drawSphere()
{
  DrawSphere(_centerPos.getVector(), _radius, _color);
}

//SETTERS

void Sphere::setCenterPos(Vector3D centerPos)
{
  _centerPos = centerPos;
}

void Sphere::setRadius(float radius)
{
  _radius = radius;
}

void Sphere::setColor(Color color)
{
  _color = color;
}

//GETTERS

Vector3D Sphere::getCenterPos()
{
  return(_centerPos);
}

float Sphere::getRadius()
{
  return(_radius);
}

Color Sphere::getColor()
{
  return(_color);
}