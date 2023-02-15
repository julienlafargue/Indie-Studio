/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Vector2D
*/

#include "Vector2D.hpp"

using namespace indie;

Vector2D::Vector2D(float x, float y)
{
  _vector.x = x;
  _vector.y = y;
}

Vector2D::Vector2D(int x, int y)
{
  _vector.x = x;
  _vector.y = y;
}

Vector2D::Vector2D(const Vector2 &vector)
{
    _vector = vector;
}

Vector2D::Vector2D(const Vector2D &vector)
{
  _vector.x = vector.get_x();
  _vector.y = vector.get_y();
}

Vector2D::~Vector2D()
{}

Vector2 Vector2D::getVector() const
{
  return (_vector);
}

float Vector2D::get_x() const
{
  return (_vector.x);
}

float Vector2D::get_y() const
{
  return (_vector.y);
}

void Vector2D::set(float x, float y)
{
  _vector.x = x;
  _vector.y = y;
}

void Vector2D::set_x(float x)
{
  _vector.x = x;
}

void Vector2D::set_y(float y)
{
  _vector.y = y;
}

Vector2D &Vector2D::operator=(const Vector2D &vector)
{
  set(vector.get_x(), vector.get_y());
  return (*this);
}

bool Vector2D::operator==(const Vector2D &vector)
{
  if (get_x() == vector.get_x() && get_y() == vector.get_y())
    return (true);
  return (false);
}

bool Vector2D::operator!=(const Vector2D &vector)
{
  if (get_x() == vector.get_x() && get_y() == vector.get_y())
    return (false);
  return (true);
}

Vector2D Vector2D::operator+(const Vector2D &vector)
{
  Vector2D result(0, 0);

  result.set(get_x() + vector.get_x(), get_y() + vector.get_y());
  return (result);
}

Vector2D Vector2D::operator-(const Vector2D &vector)
{
  Vector2D result(0, 0);

  result.set(get_x() - vector.get_x(), get_y() - vector.get_y());
  return (result);
}

Vector2D Vector2D::operator*(const Vector2D &vector)
{
  Vector2D result(0, 0);

  result.set(get_x() * vector.get_x(), get_y() * vector.get_y());
  return (result);
}

Vector2D Vector2D::operator/(const Vector2D &vector)
{
  Vector2D result(0, 0);

  result.set(get_x() / vector.get_x(), get_y() / vector.get_y());
  return (result);
}

Vector2D &Vector2D::operator+=(const Vector2D &vector)
{
  set(get_x() + vector.get_x(), get_y() + vector.get_y());
  return (*this);
}

Vector2D &Vector2D::operator-=(const Vector2D &vector)
{
  set(get_x() - vector.get_x(), get_y() - vector.get_y());
  return (*this);
}

Vector2D &Vector2D::operator*=(const Vector2D &vector)
{
  set(get_x() * vector.get_x(), get_y() * vector.get_y());
  return (*this);
}

Vector2D &Vector2D::operator/=(const Vector2D &vector)
{
  set(get_x() / vector.get_x(), get_y() / vector.get_y());
  return (*this);
}
