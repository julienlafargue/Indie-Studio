/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** RectangleShape
*/

#ifndef RECTANGLESHAPE_HPP_
#define RECTANGLESHAPE_HPP_

#include "../raylib.hpp"
#include "IShapes.hpp"
#include "../TwoDTexture.hpp"

namespace indie
{
	class RectangleShape : public IShapes {
		public:
			/**
			 * @brief Constructs a new Rectangle Shape object
			 * 
			 * @param posX X coordinate of the top-left point
			 * @param posY Y coordinate of the top-left point
			 * @param width Width of the Rectangle Shape object 
			 * @param height Height of the Rectangle Shape object
			 * @param color Color of the Rectangle Shape object
			 */
			RectangleShape(float posX, float posY, float width, float height, Color color);
			/**
			 * @brief Destroys the Rectangle Shape object
			 */
			~RectangleShape();
			/**
			 * @brief Draws the Rectangle Shape object
			 */
			void DrawShape();
			/**
			 * @brief Draws the Rectangle Shape object with the texture assigned as parameter
			 * 
			 * @param texture Texture to apply at the Rectangle Shape object
			 * @param position Position vector of the drawing
			 */
			void DrawTextureRectangle(TwoDTexture &texture, Vector2D position);
			/**
			 * @brief Checks if the point assigned as parameter is inside the Rectangle Shape object
			 * 
			 * @param point Point coordinates
			 * 
			 * @return True if the point is inside the object, False otherwise
			 */
			bool isPointInside(Vector2D point);
            /**
             * @brief get position X of the rectangle
             * 
             * @return float position X of the rectangle
             */
            float getPosX() const;
            /**
             * @brief get position Y of the rectangle
             * 
             * @return float position Y of the rectangle
             */
            float getPosY() const;
            /**
             * @brief get width of the rectangle
             * 
             * @return float width of the rectangle
             */
            float getWidth() const;
            /**
             * @brief get height of the rectangle
             * 
             * @return float height of the rectangle
             */
            float getHeight() const;
            /**
             * @brief set X position of the rectangle
             * 
             * @param posX new position X to set
             */
            void setPosX(float posX);
            /**
             * @brief set Y position of the rectangle
             * 
             * @param posX new position Y to set
             */
            void setPosY(float posY);
            /**
             * @brief set width position of the rectangle
             * 
             * @param posX new width to set
             */
            void setWidth(float width);
            /**
             * @brief set height position of the rectangle
             * 
             * @param posX new height to set
             */
            void setHeight(float height);
		private:
			Rectangle _rectangle;
			Color _color;
	};
}

#endif /* !RECTANGLESHAPE_HPP_ */
