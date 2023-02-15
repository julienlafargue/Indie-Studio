/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Sphere
*/

#ifndef SPHERE_HPP_
#define SPHERE_HPP_

#include "../raylib.hpp"
#include "../Vector3D.hpp"

namespace indie
{
  class Sphere {
    public:
      /**
       * @brief Constructs a new Sphere object
       * 
       * @param centerPos Position of the Sphere object center point
       * @param radius Radius of the Sphere object
       * @param color Color of the Sphere object
       */
      Sphere(Vector3D centerPos, float radius, Color color);
      /**
       * @brief Destroys the Sphere object
       */
      ~Sphere();
      /**
       * @brief Draws the Sphere object
       */
      void drawSphere();

      /**
       * @brief Set the Center Pos object
       * 
       * @param centerPos Position of the Sphere object center point
       */
      void setCenterPos(Vector3D centerPos);
      /**
       * @brief Set the Radius object
       * 
       * @param radius Radius of the Sphere object
       */
      void setRadius(float radius);
      /**
       * @brief Set the Color object
       * 
       * @param color Color of the Sphere object
       */
      void setColor(Color color);

      /**
       * @brief Get the Center Pos object
       * 
       * @return Vector3D 
       */
      Vector3D getCenterPos();
      /**
       * @brief Get the Radius object
       * 
       * @return float 
       */
      float getRadius();
      /**
       * @brief Get the Color object
       * 
       * @return Color 
       */
      Color getColor();

    private:
      Vector3D _centerPos;
      float _radius;
      Color _color;
  };
}

#endif /* !SPHERE_HPP_ */
