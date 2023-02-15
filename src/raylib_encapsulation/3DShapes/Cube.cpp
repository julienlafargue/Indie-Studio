/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Cube
*/

#include "Cube.hpp"

using namespace indie;

Cube::Cube(Vector3D position, float width, float height, float length, Color color) : _position(position)
{
  _width = width;
  _height = height;
  _length = length;
  _color = color;
}

Cube::~Cube()
{
}

void Cube::drawCube()
{
  DrawCube(_position.getVector(), _width, _height, _length, _color);
}

void Cube::drawCubeTexture(Texture2D texture)
{
  DrawCubeTexture(texture, _position.getVector(), _width, _height, _length, _color);
}

//SETTERS

void Cube::setPosition(Vector3D position)
{
  _position = position;
}

void Cube::setWidth(float width)
{
  _width = width;
}

void Cube::setHeight(float height)
{
  _height = height;
}

void Cube::setLength(float length)
{
  _length = length;
}

void Cube::setColor(Color color)
{
  _color = color;
}

//GETTERS

Vector3D Cube::getPosition()
{
  return(_position);
}

float Cube::getWidth()
{
  return(_width);
}

float Cube::getHeight()
{
  return(_height);
}

float Cube::getLength()
{
  return(_length);
}

Color Cube::getColor()
{
  return(_color);
}