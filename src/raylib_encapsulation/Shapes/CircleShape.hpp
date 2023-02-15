/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** CircleShape
*/


#ifndef CIRCLESHAPE_HPP_
#define CIRCLESHAPE_HPP_

#include "../raylib.hpp"
#include "IShapes.hpp"
#include "../Vector2D.hpp"

namespace indie
{
	class CircleShape : public IShapes {
		public:
			/**
			 * @brief Constructs a new Circle Shape object
			 * 
			 * @param centerX Coordinate x of the center point
			 * @param centerY Coordinate y of the center point
			 * @param radius Radius of the Circle Shape object
			 * @param color Color of the Circle Shape object
			 */
			CircleShape(int centerX, int centerY, float radius, Color color);
			/**
			 * @brief Destroys the Circle Shape object
			 */
			~CircleShape();
			/**
			 * @brief Draws the Circle Shape object
			 */
			void DrawShape();
			/**
			 * @brief Checks if the point assigned as parameter is inside the Circle Shape object
			 * 
			 * @param point Point coordinates
			 * 
			 * @return True if the point is inside the object, False otherwise
			 */
			bool isPointInside(Vector2D point);

		private:
			Vector2D _center;
			float _radius;
			Color _color;
	};
}

#endif /* !CIRCLESHAPE_HPP_ */
