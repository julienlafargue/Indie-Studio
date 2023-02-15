/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Triangle3D
*/

#include "Triangle3D.hpp"

using namespace indie;

Triangle3D::Triangle3D(Vector3D v1, Vector3D v2, Vector3D v3, Color color) : _v1(v1), _v2(v2), _v3(v3)
{
  _color = color;
}

Triangle3D::~Triangle3D()
{
}

void Triangle3D::drawTriangle3D()
{
  DrawTriangle3D(_v1.getVector(), _v2.getVector(), _v3.getVector(), _color);
}

//SETTERS

void Triangle3D::setVector1(Vector3D v1)
{
  _v1 = v1;
}

void Triangle3D::setVector2(Vector3D v2)
{
  _v2 = v2;
}

void Triangle3D::setVector3(Vector3D v3)
{
  _v3 = v3;
}

void Triangle3D::setColor(Color color)
{
  _color = color;
}

//GETTERS

Vector3D Triangle3D::getVector1()
{
  return(_v1);
}

Vector3D Triangle3D::getVector2()
{
  return(_v2);
}

Vector3D Triangle3D::getVector3()
{
  return(_v3);
}

Color Triangle3D::getColor()
{
  return(_color);
}
