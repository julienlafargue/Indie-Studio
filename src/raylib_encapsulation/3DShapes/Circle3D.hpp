/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Circle3D
*/

#ifndef CIRCLE3D_HPP_
#define CIRCLE3D_HPP_

#include "../raylib.hpp"
#include "../Vector3D.hpp"

namespace indie 
{
  class Circle3D {
    public:
      /**
       * @brief Constructs a new Circle3D object
       * 
       * @param center 3D position of the Circle3D center-point
       * @param radius Radius of the Circle3D
       * @param rotationAxis Axis of rotation
       * @param rotationAngle Angle of rotation
       * @param color Color of the sphere
       */
      Circle3D(Vector3D center, float radius, Vector3D rotationAxis, float rotationAngle, Color color);
      /**
       * @brief Destroys the Circle3D object
       */
      ~Circle3D();
      /**
       * @brief Draws the Circle3D object
       */
      void drawCircle3D();

      /**
       * @brief Sets the Center object
       * 
       * @param center 3D position of the Circle3D center-point
       */
      void setCenter(Vector3D center);
      /**
       * @brief Sets the Radius object
       * 
       * @param radius Radius of the Circle3D
       */
      void setRadius(float radius);
      /**
       * @brief Sets the Rotation Axis object
       * 
       * @param rotationAxis Axis of rotation
       */
      void setRotationAxis(Vector3D rotationAxis);
      /**
       * @brief Sets the Rotation Angle object
       * 
       * @param rotationAngle Angle of rotation
       */
      void setRotationAngle(float rotationAngle);
      /**
       * @brief Sets the Color object
       * 
       * @param color Color of the sphere
       */
      void setColor(Color color);

      /**
       * @brief Gets the Center object
       * 
       * @return Vector3D 
       */
      Vector3D getCenter();
      /**
       * @brief Gets the Radius object
       * 
       * @return float 
       */
      float getRadius();
      /**
       * @brief Gets the Rotation Axis object
       * 
       * @return Vector3D 
       */
      Vector3D getRotationAxis();
      /**
       * @brief Gets the Rotation Angle object
       * 
       * @return float 
       */
      float getRotationAngle();
      /**
       * @brief Gets the Color object
       * 
       * @return Color 
       */
      Color getColor();

    private:
      Vector3D _center;
      float _radius;
      Vector3D _rotationAxis;
      float _rotationAngle;
      Color _color;
  };
}

#endif /* !CIRCLE3D_HPP_ */
