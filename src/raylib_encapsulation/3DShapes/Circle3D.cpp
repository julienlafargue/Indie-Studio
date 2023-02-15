/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Circle3D
*/

#include "Circle3D.hpp"

using namespace indie;

Circle3D::Circle3D(Vector3D center, float radius, Vector3D rotationAxis, float rotationAngle, Color color) : _center(center), _rotationAxis(rotationAxis)
{
  _radius = radius;
  _rotationAngle = rotationAngle;
  _color = color;
}

Circle3D::~Circle3D()
{
}

void Circle3D::drawCircle3D()
{
  DrawCircle3D(_center.getVector(), _radius, _rotationAxis.getVector(), _rotationAngle, _color);
}

//SETTERS

void Circle3D::setCenter(Vector3D center)
{
  _center = center;
}

void Circle3D::setRadius(float radius)
{
  _radius = radius;
}

void Circle3D::setRotationAxis(Vector3D rotationAxis)
{
  _rotationAxis = rotationAxis;
}

void Circle3D::setRotationAngle(float rotationAngle)
{
  _rotationAngle = rotationAngle;
}

void Circle3D::setColor(Color color)
{
  _color = color;
}

//GETTERS

Vector3D Circle3D::getCenter()
{
  return(_center);
}

float Circle3D::getRadius()
{
  return(_radius);
}

Vector3D Circle3D::getRotationAxis()
{
  return(_rotationAxis);
}

float Circle3D::getRotationAngle()
{
  return(_rotationAngle);
}

Color Circle3D::getColor()
{
  return(_color);
}