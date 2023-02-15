/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** WinMenu
*/

#pragma once
#include "../../entity/Button.hpp"
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../raylib_encapsulation/Vector2D.hpp"
#include "../../raylib_encapsulation/Text.hpp"

#include "../../enum/gameEnum.hpp"

namespace indie {
  class WinMenu {
    public:
      WinMenu();
      ~WinMenu();
      void setFox(int foxId);
      gamestatus::GameStatus sceneSwitcher(Mouse mouse);
      void draw();
    private:
      Button _buttonBackMenu;
      Button _buttonRestart;
      Text _foxName;
      TwoDTexture _background;
      TwoDTexture _foxBox;
      TwoDTexture _fox;
  };
}
