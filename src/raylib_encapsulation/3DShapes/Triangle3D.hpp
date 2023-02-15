/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Triangle3D
*/

#ifndef TRIANGLE3D_HPP_
#define TRIANGLE3D_HPP_

#include "../raylib.hpp"
#include "../Vector3D.hpp"

namespace indie 
{
  class Triangle3D {
    public:
      /**
       * @brief Constructs a new Triangle3D object
       * 
       * @param v1 First point of the Triangle3D object
       * @param v2 Second point of the Triangle3D object
       * @param v3 Third point of the Triangle3D object
       * @param color Color of the Triangle3D object
       */
      Triangle3D(Vector3D v1, Vector3D v2, Vector3D v3, Color color);
      /**
       * @brief Destroys the Triangle3D object
       */
      ~Triangle3D();
      /**
       * @brief Draws the Triangle3D object
       */
      void drawTriangle3D();

      /**
       * @brief Set the Vector1 object
       * 
       * @param v1 First point of the Triangle3D object
       */
      void setVector1(Vector3D v1);
      /**
       * @brief Set the Vector2 object
       * 
       * @param v2 Second point of the Triangle3D object
       */
      void setVector2(Vector3D v2);
      /**
       * @brief Set the Vector3D object
       * 
       * @param v3 Third point of the Triangle3D object
       */
      void setVector3(Vector3D v3);
      /**
       * @brief Set the Color object
       * 
       * @param color Color of the Triangle3D object
       */
      void setColor(Color color);

      /**
       * @brief Get the Vector1 object
       * 
       * @return Vector3D 
       */
      Vector3D getVector1();
      /**
       * @brief Get the Vector2 object
       * 
       * @return Vector3D 
       */
      Vector3D getVector2();
      /**
       * @brief Get the Vector3D object
       * 
       * @return Vector3D 
       */
      Vector3D getVector3();
      /**
       * @brief Get the Color object
       * 
       * @return Color 
       */
      Color getColor();

    private:
      Vector3D _v1;
      Vector3D _v2;
      Vector3D _v3;
      Color _color;
  };
}

#endif /* !TRIANGLE3D_HPP_ */
