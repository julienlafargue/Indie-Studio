/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** gameEnum
*/

#pragma once

namespace indie {
  namespace gamemode {
    enum GameMode {
      NORMAL,
      CUSTOM,
      SUDDENDEATH
    };
  }
  namespace gamestatus {
    enum GameStatus {
      PAUSED,
      RUNNING,
      UNLAUNCHED,
      SETTINGS,
      WON,
      EXIT
    };
  }
  namespace entityid{
    enum EntityID {
      NONE = 0,
      WALL,
      CRATE,
      PLAYER,
      BOMB,
      BLOW,
      BOMB_UP,
      FIRE_UP,
      SPEED_UP,
      MAP
    };
  }
}
