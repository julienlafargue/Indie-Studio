/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** TwoDTexture
*/

#ifndef TWODTEXTURE_HPP_
#define TWODTEXTURE_HPP_

#include "raylib.hpp"
#include <string>
#include "Vector2D.hpp"

namespace indie
{
	class TwoDTexture
	{
	public:
		/**
		 * @brief Constructs a new TwoDTexture object
		 * 
		 * @param texturePath Path to the texture
		 * @param nbFrames number of frames for animation
		 */
		TwoDTexture(std::string texturePath, int nbFrames);
		/**
		 * @brief Destroys the TwoDTexture object
		 */
		~TwoDTexture();
		/**
		 * @brief Loads a texture from a file
		 * @param fileName Path to the texture 
		 */
		void loadTexture(std::string fileName);
		/**
		 * @brief Unloads the texture
		 */
		void unloadTexture();
		/**
		 * @brief Sets the Number of Frames
		 * 
		 * @param newNbFrames Number of frames
		 */
		void setNbFrames(int newNbFrames);
		/**
		 * @brief Gets the Number of Frames
		 * 
		 * @return int Number of Frames
		 */
		int getNbFrames();
		/**
		 * @brief Gets the Texture Width
		 * 
		 * @return float Width of the texture
		 */
		float getTextureWidth() const;
		/**
		 * @brief Gets the Texture Height
		 * 
		 * @return float Height of the texture
		 */
		float getTextureHeight() const;
		/**
		 * @brief f
		 * 
		 * @return rien
		 */
		void drawTexture(Vector2D vector);
		/**
		 * @brief Gets the Texture
		 * 
		 * @return Texture2D of the texture
		 */
		Texture2D& getTexture();
		/**
		 * @brief Set the Texture
		 * 
		 * @param texture texture to set
		 * 
		 */
		void setTexture(Texture2D texture);
 		void drawTextureScale(Vector2D position, float scale);

	private:
		Texture2D _texture;
		int _nbFrames;
	};
}

#endif