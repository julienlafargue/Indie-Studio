/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Parallax
*/

#pragma once
#include <string>
#include "../../raylib_encapsulation/TwoDTexture.hpp"

namespace indie {
  class Background {
    public:
      Background(float position);
      ~Background();
      void draw();
      void moveBackground(float speed);
      void resetBackground();
      void drawBackground();
      void drawMiddleground();
      void drawForeground();

    private:
      TwoDTexture _background;
      TwoDTexture _middleground;
      TwoDTexture _foreground;
      float _backgroundX;
      float _middlegroundX;
      float _foregroundX;
  };
}
