/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Cube
*/

#ifndef CUBE_HPP_
#define CUBE_HPP_

#include "../raylib.hpp"
#include "../Vector3D.hpp"

namespace indie
{
  class Cube {
    public:
      /**
       * @brief Constructs a new Cube object
       * 
       * @param position 3D position of the Cube object
       * @param width Width of the Cube object
       * @param height Height of the Cube object
       * @param length Length of the Cube object
       * @param color Color of the Cube object
       */
      Cube(Vector3D position, float width, float height, float length, Color color);
      /**
       * @brief Destroys the Cube object
       */
      ~Cube();
      /**
       * @brief Draws the Cube object
       */
      void drawCube();
      /**
       * @brief Draws the Cube object with a texture
       * 
       * @param texture Texture applied to the Cube object
       */
      void drawCubeTexture(Texture2D texture);

      /**
       * @brief Set the Position object
       * 
       * @param position 3D position of the Cube object
       */
      void setPosition(Vector3D position);
      /**
       * @brief Set the Width object
       * 
       * @param width Width of the Cube object
       */
      void setWidth(float width);
      /**
       * @brief Set the Height object
       * 
       * @param height Height of the Cube object
       */
      void setHeight(float height);
      /**
       * @brief Set the Length object
       * 
       * @param length Length of the Cube object
       */
      void setLength(float length);
      /**
       * @brief Set the Color object
       * 
       * @param color Color of the Cube object
       */
      void setColor(Color color);

      /**
       * @brief Get the Position object
       * 
       * @return Vector3D 
       */
      Vector3D getPosition();
      /**
       * @brief Get the Width object
       * 
       * @return float 
       */
      float getWidth();
      /**
       * @brief Get the Height object
       * 
       * @return float 
       */
      float getHeight();
      /**
       * @brief Get the Length object
       * 
       * @return float 
       */
      float getLength();
      /**
       * @brief Get the Color object
       * 
       * @return Color 
       */
      Color getColor();

    private:
      Vector3D _position;
      float _width;
      float _height;
      float _length;
      Color _color;
  };
}

#endif /* !CUBE_HPP_ */
