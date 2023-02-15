/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Plane
*/

#ifndef PLANE_HPP_
#define PLANE_HPP_

#include "../raylib.hpp"
#include "../Vector2D.hpp"
#include "../Vector3D.hpp"

namespace indie {
  class Plane {
    public:
      /**
       * @brief Constructs a new Plane object
       * 
       * @param centerPos Position of the Plane object center point
       * @param size Size of the Plane object
       * @param color Color of the Plane object
       */
      Plane(Vector3D centerPos, Vector2D size, Color color);
      /**
       * @brief Destroys the Plane object
       */
      ~Plane();
      /**
       * @brief Draws the Plane object
       */
      void drawPlane();

      /**
       * @brief Set the Center Pos object
       * 
       * @param centerPos Position of the Plane object center point
       */
      void setCenterPos(Vector3D centerPos);
      /**
       * @brief Set the Size object
       * 
       * @param size Size of the Plane object
       */
      void setSize(Vector2D size);
      /**
       * @brief Set the Color object
       * 
       * @param color Color of the Plane object
       */
      void setColor(Color color);

      /**
       * @brief Get the Center Pos object
       * 
       * @return Vector3D 
       */
      Vector3D getCenterPos();
      /**
       * @brief Get the Size object
       * 
       * @return Vector2D 
       */
      Vector2D getSize();
      /**
       * @brief Get the Color object
       * 
       * @return Color 
       */
      Color getColor();

    private:
      Vector3D _centerPos;
      Vector2D _size;
      Color _color;
  };
}

#endif /* !PLANE_HPP_ */