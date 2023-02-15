/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** PixelShape
*/

#ifndef PIXELSHAPE_HPP_
#define PIXELSHAPE_HPP_

#include "../raylib.hpp"
#include "IShapes.hpp"

namespace indie
{
	class PixelShape : public IShapes {
		public:
			/**
			 * @brief Constructs a new Pixel Shape object
			 * 
			 * @param posX Position x of the Pixel Shape object
			 * @param posY Position y of the Pixel Shape object
			 * @param color Color of the Pixel Shape object
			 */
			PixelShape(int posX, int posY, Color color);
			/**
			 * @brief Destroys the Pixel Shape object
			 */
			~PixelShape();
			/**
			 * @brief Draws the Pixel Shape object
			 */
			void DrawShape();

		private:
			int _posX;
			int _posY;
			Color _color;
	};
}

#endif /* !PIXELSHAPE_HPP_ */
