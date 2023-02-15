/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Vector2D
*/

#pragma once

#include "raylib.hpp"

namespace indie
{
  class Vector2D {
    public:
      Vector2D(float x, float y);
      Vector2D(int x, int y);

      Vector2D(const Vector2 &vector);
      Vector2D(const Vector2D &vector);
      ~Vector2D();

      Vector2 getVector() const;
      float get_x() const;
      float get_y() const;

      void set(float x, float y);
      void set_x(float x);
      void set_y(float y);

      Vector2D &operator=(const Vector2D &);
      bool operator==(const Vector2D &);
      bool operator!=(const Vector2D &);
  
      Vector2D operator+(const Vector2D &);
      Vector2D operator-(const Vector2D &);
      Vector2D operator*(const Vector2D &);
      Vector2D operator/(const Vector2D &);

      Vector2D &operator+=(const Vector2D &);
      Vector2D &operator-=(const Vector2D &);
      Vector2D &operator*=(const Vector2D &);
      Vector2D &operator/=(const Vector2D &);

    private:
      Vector2 _vector;
  };
}