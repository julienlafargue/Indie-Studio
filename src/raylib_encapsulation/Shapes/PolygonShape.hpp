/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** PolygonShape
*/

#ifndef POLYGONSHAPE_HPP_
#define POLYGONSHAPE_HPP_

#include "../raylib.hpp"
#include "IShapes.hpp"

namespace indie {
	class PolygonShape : public IShapes {
		public:
			/**
			 * @brief Construct a new Polygon Shape object
			 * 
			 * @param center Center point of the PloygonShape object
			 * @param sides Number of sides of the PolygonShape object
			 * @param radius Radius of the PolygonShape object
			 * @param rotation Rotation of the PolygonShape object
			 * @param color Color of the PolygonShape object 
			 */
			PolygonShape(Vector2D center, int sides, float radius, float rotation, Color color);
			/**
			 * @brief Destroy the Polygon Shape object
			 */
			~PolygonShape();
			/**
			 * @brief Draws the Polygon Shape object
			 */
			void DrawShape();

			private:
				Vector2D _center;
				int _sides;
				float _radius;
				float _rotation;
				Color _color;
	};
}
#endif /* !POLYGONSHAPE_HPP_ */

