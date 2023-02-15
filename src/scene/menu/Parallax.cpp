/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Parallax
*/

#include "Parallax.hpp"

indie::Parallax::Parallax() : _background1(0), _background2(1920)
{
}

indie::Parallax::~Parallax()
{
}

void indie::Parallax::draw()
{
  _background1.moveBackground(2);
  _background2.moveBackground(2);
  _background1.resetBackground();
  _background2.resetBackground();

  _background1.drawBackground();
  _background2.drawBackground();
  _background1.drawMiddleground();
  _background2.drawMiddleground();
  _background1.drawForeground();
  _background2.drawForeground();

}
