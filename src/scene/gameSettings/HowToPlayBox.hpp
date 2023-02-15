/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** HowToPlayBox
*/

#pragma once
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../raylib_encapsulation/Text.hpp"
#include "../../raylib_encapsulation/Vector2D.hpp"
#include "../../enum/gameEnum.hpp"

namespace indie {
  class HowToPlayBox {
    public:
      HowToPlayBox(Vector2D position, gamemode::GameMode gamemode);
      ~HowToPlayBox();

      //getters
      gamemode::GameMode getGamemode() const;

      //setters
      void setGamemode(gamemode::GameMode gamemode);

      //member function
      void draw();
    private:
      TwoDTexture _howToPlayBoxTexture;
      Text _howToPlayTitle;
      Text _howToPlayText;
      Text _howToPlayGamemodeTitle;
      Text _howToPlayGamemodeText;
      Vector2D _position;
      gamemode::GameMode _gamemode;
      std::string _howToPlayString;

  };
}

