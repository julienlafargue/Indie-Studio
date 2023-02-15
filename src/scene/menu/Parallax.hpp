/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Parallax
*/

#pragma once
#include "MovingBackground.hpp"

namespace indie {
  class Parallax {
    public:
      Parallax();
      ~Parallax();
      void draw();

    private:
      Background _background1;
      Background _background2;
  };
}
