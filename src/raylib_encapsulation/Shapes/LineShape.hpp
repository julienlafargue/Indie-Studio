/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** LineShape
*/

#ifndef LINESHAPE_HPP_
#define LINESHAPE_HPP_

#include "../raylib.hpp"
#include "IShapes.hpp"

namespace indie
{
	class LineShape : public IShapes {
		public:
			/**
			 * @brief Constructs a new Line Shape object
			 * 
			 * @param startPosX X coordinate of the starting point
			 * @param startPosY Y coordinate of the starting point
			 * @param endPosX X coordinate of the ending point
			 * @param endPosY Y coordinate of the ending point
			 * @param color Color of the Line Shape object
			 */
			LineShape(int startPosX, int startPosY, int endPosX, int endPosY, Color color);
			/**
			 * @brief Destroys the Line Shape object
			 */
			~LineShape();
			/**
			 * @brief Draws the Line Shape object
			 */
			void DrawShape();

		private:
			int _posX1;
			int _posY1;
			int _posX2;
			int _posY2;
			Color _color;
	};
}

#endif /* !LINESHAPE_HPP_ */
