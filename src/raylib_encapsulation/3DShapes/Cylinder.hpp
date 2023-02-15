/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Cylinder
*/

#ifndef CYLINDER_HPP_
#define CYLINDER_HPP_

#include "../raylib.hpp"
#include "../Vector3D.hpp"

namespace indie
{
  class Cylinder {
    public:
      /**
       * @brief Constructs a new Cylinder object
       * 
       * @param position Position of the Cylinder object
       * @param radiusTop Radius of the Cylinder object top circle
       * @param radiusBottom Radius of the Cylinder object bottom circle
       * @param height Height of the Cylinder object
       * @param slices an object
       * @param color Color of the Cylinder object
       */
      Cylinder(Vector3D position, float radiusTop, float radiusBottom, float height, int slices, Color color);
      /**
       * @brief Destroys the Cylinder object
       */
      ~Cylinder();
      /**
       * @brief Draws the Cylinder object
       */

      void drawCylinder();

      /**
       * @brief Set the Position object
       * 
       * @param position Position of the Cylinder object
       */
      void setPosition(Vector3D position);
      /**
       * @brief Set the Radius Top object
       * 
       * @param radiusTop Radius of the Cylinder object top circle
       */
      void setRadiusTop(float radiusTop);
      /**
       * @brief Set the Radius Bottom object
       * 
       * @param radiusBottom Radius of the Cylinder object bottom circle
       */
      void setRadiusBottom(float radiusBottom);
      /**
       * @brief Set the Height object
       * 
       * @param height Height of the Cylinder object
       */
      void setHeight(float height);
      /**
       * @brief Set the Slices object
       * 
       * @param slices an object
       */
      void setSlices(int slices);
      /**
       * @brief Set the Color object
       * 
       * @param color Color of the Cylinder object
       */
      void setColor(Color color);

      /**
       * @brief Get the Position object
       * 
       * @return Vector3 
       */
      Vector3D getPosition();
      /**
       * @brief Get the Radius Top object
       * 
       * @return float 
       */
      float getRadiusTop();
      /**
       * @brief Get the Radius Bottom object
       * 
       * @return float 
       */
      float getRadiusBottom();
      /**
       * @brief Get the Height object
       * 
       * @return float 
       */
      float getHeight();
      /**
       * @brief Get the Slices object
       * 
       * @return int 
       */
      int getSlices();
      /**
       * @brief Get the Color object
       * 
       * @return Color 
       */
      Color getColor();

    private:
      Vector3D _position;
      float _radiusTop;
      float _radiusBottom;
      float _height;
      int _slices;
      Color _color;
  };
}

#endif /* !CYLINDER_HPP_ */
