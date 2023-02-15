/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** TriangleShape
*/

#ifndef TRIANGLESHAPE_HPP_
#define TRIANGLESHAPE_HPP_

#include "../raylib.hpp"
#include "IShapes.hpp"

namespace indie
{
	class TriangleShape : public IShapes {
		public:
			/**
			 * @brief Constructs a new Triangle Shape object
			 * 
			 * @param v1 
			 * @param v2 
			 * @param v3 
			 * @param color 
			 */
			TriangleShape(Vector2D v1, Vector2D v2, Vector2D v3, Color color);
			/**
			 * @brief Destroys the Triangle Shape object
			 */
			~TriangleShape();
			/**
			 * @brief Draws the Triangle Shape object
			 */
			void DrawShape();
			/**
			 * @brief Checks if the point assigned as parameter is inside the Triangle Shape object
			 * 
			 * @param point Point coordinates
			 * 
			 * @return True if the point is inside the object, False otherwise
			 */
			bool isPointInside(Vector2D point);
		private:
			Vector2D _v1;
			Vector2D _v2;
			Vector2D _v3;
			Color _color;
	};
}

#endif /* !TRIANGLESHAPE_HPP_ */
