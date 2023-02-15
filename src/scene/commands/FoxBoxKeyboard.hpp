/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** FoxBoxKeyboard
*/

#pragma once
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../raylib_encapsulation/Text.hpp"
#include <array>


namespace indie {
  class FoxBoxKeyboard {
    public:
      FoxBoxKeyboard(Vector2D position, std::string foxBoxPath, std::array<std::string, 5> keyboardBindedTouch);
      ~FoxBoxKeyboard();
      void draw();

    protected:
    private:
      TwoDTexture _foxBox;
      Vector2D _position;
      Text _keyUpText;
      Text _keyLeftText;
      Text _keyDownText;
      Text _keyRightText;
      Text _keyPutBomb;
  };
}

