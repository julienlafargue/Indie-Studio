/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** TwoDTexture
*/

#include "TwoDTexture.hpp"

indie::TwoDTexture::TwoDTexture(std::string texturePath, int nbFrames)
{
	loadTexture(texturePath);
	_nbFrames = nbFrames;
}

indie::TwoDTexture::~TwoDTexture()
{
	unloadTexture();
}

//getters
Texture2D& indie::TwoDTexture::getTexture()
{
	return _texture;
}

//setters
void indie::TwoDTexture::setTexture(Texture2D texture)
{
	_texture = texture;
}

void indie::TwoDTexture::loadTexture(std::string fileName)
{
	_texture = LoadTexture(fileName.c_str());
}

void indie::TwoDTexture::unloadTexture()
{
	UnloadTexture(_texture);
}

void indie::TwoDTexture::setNbFrames(int newNbFrames)
{
	_nbFrames = newNbFrames;
}

int indie::TwoDTexture::getNbFrames()
{
	return (_nbFrames);
}

float indie::TwoDTexture::getTextureWidth() const
{
	return(static_cast<float>(_texture.width));
}

float indie::TwoDTexture::getTextureHeight() const
{
	return(static_cast<float>(_texture.height));
}

void indie::TwoDTexture::drawTexture(indie::Vector2D vector)
{
	DrawTexture(_texture, vector.get_x(), vector.get_y(), WHITE);
}

void indie::TwoDTexture::drawTextureScale(Vector2D position, float scale)
{
	DrawTextureEx(_texture, position.getVector(), 0, scale, WHITE);
}
