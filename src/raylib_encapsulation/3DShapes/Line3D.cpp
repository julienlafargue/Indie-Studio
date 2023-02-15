/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Line3D
*/

#include "Line3D.hpp"

using namespace indie;

Line3D::Line3D(Vector3D startPos, Vector3D endPos, Color color) : _startPos(startPos), _endPos(endPos)
{
  _color = color;
}

Line3D::~Line3D()
{
}

void Line3D::drawLine3D()
{
  DrawLine3D(_startPos.getVector(), _endPos.getVector(), _color);
}

//SETTERS

void Line3D::setStartPos(Vector3D startPos)
{
  _startPos = startPos;
}

void Line3D::setEndPos(Vector3D endPos)
{
  _startPos = endPos;
}

void Line3D::setColor(Color color)
{
  _color = color;
}

//GETTERS

Vector3D Line3D::getStartPos()
{
  return(_startPos);
}

Vector3D Line3D::getEndPos()
{
  return(_endPos);
}

Color Line3D::getColor()
{
  return(_color);
}