/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Point3D
*/

#ifndef POINT3D_HPP_
#define POINT3D_HPP_

#include "../raylib.hpp"
#include "../Vector3D.hpp"

namespace indie
{
  class Point3D {
    public:
      /**
       * @brief Constructs a new Point3D object
       * 
       * @param position Position of the Point3D object
       * @param color Color of the Point3D object
       */
      Point3D(Vector3D position, Color color);
      /**
       * @brief Destroys the Point3D object
       */
      ~Point3D();
      /**
       * @brief Draws the Point3D object
       */
      void drawPoint3D();

      /**
       * @brief Set the Position object
       * 
       * @param position Position of the Point3D object
       */
      void setPosition(Vector3D position);
      /**
       * @brief Set the Color object
       * 
       * @param color Color of the Point3D object
       */
      void setColor(Color color);

      /**
       * @brief Get the Position object
       * 
       * @return Vector3D 
       */
      Vector3D getPosition();
      /**
       * @brief Get the Color object
       * 
       * @return Color 
       */
      Color getColor();

    private:
      Vector3D _position;
      Color _color;
  };
}

#endif /* !POINT3D_HPP_ */
