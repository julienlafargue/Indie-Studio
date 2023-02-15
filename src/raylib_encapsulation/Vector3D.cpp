/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Vector3D
*/

#include "Vector3D.hpp"

using namespace indie;

Vector3D::Vector3D()
{
}

Vector3D::Vector3D(float x, float y, float z)
{
  _vector.x = x;
  _vector.y = y;
  _vector.z = z;
}

Vector3D::Vector3D(const Vector3 &vector)
{
    _vector = vector;
}

Vector3D::Vector3D(const Vector3D &vector)
{
  _vector.x = vector._vector.x;
  _vector.y = vector._vector.y;
  _vector.z = vector._vector.z;
}

Vector3D::~Vector3D()
{}

Vector3 Vector3D::getVector() const
{
  return (_vector);
}

float Vector3D::get_x() const
{
  return (_vector.x);
}

float Vector3D::get_y() const
{
  return (_vector.y);
}

float Vector3D::get_z() const
{
  return (_vector.z);
}

void Vector3D::set(float x, float y, float z)
{
  _vector.x = x;
  _vector.y = y;
  _vector.z = z;
}

void Vector3D::set_x(float x)
{
  _vector.x = x;
}

void Vector3D::set_y(float y)
{
  _vector.y = y;
}

void Vector3D::set_z(float z)
{
  _vector.z = z;
}

Vector3D &Vector3D::operator=(const Vector3D &vector)
{
  set(vector.get_x(), vector.get_y(), vector.get_z());
  return (*this);
}

bool Vector3D::operator==(const Vector3D &vector)
{
  if (vector.get_x() == this->get_x() && vector.get_y() == this->get_y() && vector.get_z() == this->get_z())
    return true;
  return false;
}

bool Vector3D::operator!=(const Vector3D &vector)
{
  if (get_x() == vector.get_x() && get_y() == vector.get_y() && get_z() == vector.get_z())
    return (false);
  return (true);
}

Vector3D Vector3D::operator+(const Vector3D &vector)
{
  Vector3D result(0, 0, 0);

  result.set_x(this->get_x() + vector.get_x());
  result.set_y(this->get_y() + vector.get_y());
  result.set_z(this->get_z() + vector.get_z());
  return (result);
}

Vector3D Vector3D::operator-(const Vector3D &vector)
{
  Vector3D result(0, 0, 0);

  result.set_x(this->get_x() - vector.get_x());
  result.set_y(this->get_y() - vector.get_y());
  result.set_z(this->get_z() - vector.get_z());
  return (result);
}

Vector3D Vector3D::operator*(const Vector3D &vector)
{
  Vector3D result(0, 0, 0);

  result.set_x(this->get_x() * vector.get_x());
  result.set_y(this->get_y() * vector.get_y());
  result.set_z(this->get_z() * vector.get_z());
  return (result);
}

Vector3D Vector3D::operator/(const Vector3D &vector)
{
  Vector3D result(0, 0, 0);

  result.set_x(this->get_x() / vector.get_x());
  result.set_y(this->get_y() / vector.get_y());
  result.set_z(this->get_z() / vector.get_z());
  return (result);
}

Vector3D &Vector3D::operator+=(const Vector3D &vector)
{
  this->set_x(this->get_x() + vector.get_x());
  this->set_y(this->get_y() + vector.get_y());
  this->set_z(this->get_z() + vector.get_z());
  return (*this);
}

Vector3D &Vector3D::operator-=(const Vector3D &vector)
{
  this->set_x(this->get_x() - vector.get_x());
  this->set_y(this->get_y() - vector.get_y());
  this->set_z(this->get_z() - vector.get_z());
  return (*this);
}

Vector3D &Vector3D::operator*=(const Vector3D &vector)
{
  this->set_x(this->get_x() * vector.get_x());
  this->set_y(this->get_y() * vector.get_y());
  this->set_z(this->get_z() * vector.get_z());
  return (*this);
}

Vector3D &Vector3D::operator/=(const Vector3D &vector)
{
  this->set_x(this->get_x() / vector.get_x());
  this->set_y(this->get_y() / vector.get_y());
  this->set_z(this->get_z() / vector.get_z());
  return (*this);
}
