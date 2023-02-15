/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Line3D
*/

#ifndef LINE3D_HPP_
#define LINE3D_HPP_

#include "../raylib.hpp"
#include "../Vector3D.hpp"

namespace indie
{
  class Line3D {
    public:
      /**
       * @brief Constructs a new Line3D object
       * 
       * @param startPos Starting position of the Line3D
       * @param endPos Ending position of the Line3D
       * @param color Color of the Line3D
       */
      Line3D(Vector3D startPos, Vector3D endPos, Color color);
      /**
       * @brief Destroys the Line3D object
       */
      ~Line3D();
      /**
       * @brief Draws a Line3D object
       */
      void drawLine3D();

      /**
       * @brief Set the Start Pos object
       * 
       * @param startPos Starting position of the Line3D
       */
      void setStartPos(Vector3D startPos);
      /**
       * @brief Set the End Pos object
       * 
       * @param endPos Ending position of the Line3D
       */
      void setEndPos(Vector3D endPos);
      /**
       * @brief Set the Color object
       * 
       * @param color Color of the Line3D
       */
      void setColor(Color color);

      /**
       * @brief Get the Start Pos object
       * 
       * @return Vector3D 
       */
      Vector3D getStartPos();
      /**
       * @brief Get the End Pos object
       * 
       * @return Vector3D 
       */
      Vector3D getEndPos();
      /**
       * @brief Get the Color object
       * 
       * @return Color 
       */
      Color getColor();

    private:
      Vector3D _startPos;
      Vector3D _endPos;
      Color _color;
  };
}

#endif /* !LINE3D_HPP_ */