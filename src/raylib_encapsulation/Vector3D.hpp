/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Vector3D
*/

#pragma once

#include "raylib.hpp"

namespace indie
{
  class Vector3D {
    public:
      Vector3D();
      Vector3D(float x, float y, float z);
      Vector3D(const Vector3 &vector);
      Vector3D(const Vector3D &vector);
      ~Vector3D();

      Vector3 getVector() const;

      float get_x() const;
      float get_y() const;
      float get_z() const;

      void set(float x, float y, float z);
      void set_x(float x);
      void set_y(float y);
      void set_z(float z);

      Vector3D &operator=(const Vector3D &);
      bool operator==(const Vector3D &);
      bool operator!=(const Vector3D &);

      Vector3D operator+(const Vector3D &);
      Vector3D operator-(const Vector3D &);
      Vector3D operator*(const Vector3D &);
      Vector3D operator/(const Vector3D &);

      Vector3D &operator+=(const Vector3D &);
      Vector3D &operator-=(const Vector3D &);
      Vector3D &operator*=(const Vector3D &);
      Vector3D &operator/=(const Vector3D &);

    private:
      Vector3 _vector;
  };
}