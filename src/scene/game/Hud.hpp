/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Hud
*/

#pragma once
#include "../../raylib_encapsulation/Text.hpp"
#include "../../entity/player/Player.hpp"
#include "FoxBox.hpp"
#include "TextWithValue.hpp"

namespace indie {
  class Hud {
    public:
      Hud();
      ~Hud();
      void draw();
      void updateFoxBoxValues(Player &player, int nbPlayer);
      void updateTimerValue(int value);
      void setEnableTimer(bool enableTimer);

    protected:
    private:
      bool _enableTimer;
      TextWithValue _timer;
      FoxBox _orangeFox;
      FoxBox _redFox;
      FoxBox _blueFox;
      FoxBox _greenFox;
      int _nbPlayers;

  };
}

