/*
** EPITECH PROJECT, 2022
** ù
** File description:
** Parallax
*/

#include "MovingBackground.hpp"

indie::Background::Background(float position) :
_background("assets/scenes/Menu/menu_bck0.png", 1),
_middleground("assets/scenes/Menu/menu_bck1.png", 1),
_foreground("assets/scenes/Menu/menu_bck2.png", 1),
_backgroundX(position),
_middlegroundX(position),
_foregroundX(position)
{
}

indie::Background::~Background()
{
}

void indie::Background::resetBackground()
{
  if (_backgroundX <= (_background.getTextureWidth() * 10) * -1)
    _backgroundX = (_background.getTextureWidth() * 10);
  if (_middlegroundX <= (_background.getTextureWidth() * 10) * -1)
    _middlegroundX = (_background.getTextureWidth() * 10);
  if (_foregroundX <= (_background.getTextureWidth() * 10) * -1)
    _foregroundX = (_background.getTextureWidth() * 10);
}

void indie::Background::moveBackground(float speed)
{
  _backgroundX -= speed / 4;
  _middlegroundX -= speed / 2;
  _foregroundX -= speed;
}

void indie::Background::drawBackground()
{
  _background.drawTextureScale(Vector2D(_backgroundX,0.0), 10);
}

void indie::Background::drawMiddleground()
{
  _middleground.drawTextureScale(Vector2D(_middlegroundX,0.0), 10);

}

void indie::Background::drawForeground()
{
  _foreground.drawTextureScale(Vector2D(_foregroundX,0.0), 10);
  
}
