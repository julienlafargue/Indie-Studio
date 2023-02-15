/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Hud
*/

#include "Hud.hpp"

indie::Hud::Hud() :
  _timer(Vector2D(550, 50), "TIME LEFT: ", 80),
  _orangeFox(Vector2D(25,25), "assets/scenes/Game/HUD/OrangeBoxFox.png", "JULIUS"),
  _redFox(Vector2D(1500,25), "assets/scenes/Game/HUD/RedBoxFox.png", "KANTUS"),
  _blueFox(Vector2D(25,700), "assets/scenes/Game/HUD/BlueBoxFox.png", "ARTHUS"),
  _greenFox(Vector2D(1500,700), "assets/scenes/Game/HUD/GreenBoxFox.png", "ALEXUS"),
  _nbPlayers(0)
{
}

indie::Hud::~Hud()
{
}

void indie::Hud::updateFoxBoxValues(Player &player, int nbPlayer)
{
  _nbPlayers = nbPlayer;

  if (player.getPlayerId() == 1) {
    _orangeFox.setSpeedText(std::to_string(static_cast<size_t> (player.getSpeedMult() * 10)));
    _orangeFox.setNumberOfBombText(std::to_string(player.getBombTab().size()));
    _orangeFox.setBombStrengthText(std::to_string(player.getBombTab()[0].getRadius()));
  }
  if (player.getPlayerId() == 2) {
    _redFox.setSpeedText(std::to_string(static_cast<size_t> (player.getSpeedMult() * 10)));
    _redFox.setNumberOfBombText(std::to_string(player.getBombTab().size()));
    _redFox.setBombStrengthText(std::to_string(player.getBombTab()[0].getRadius()));
  }

  if (player.getPlayerId() == 3) {
    _blueFox.setSpeedText(std::to_string(static_cast<size_t> (player.getSpeedMult() * 10)));
    _blueFox.setNumberOfBombText(std::to_string(player.getBombTab().size()));
    _blueFox.setBombStrengthText(std::to_string(player.getBombTab()[0].getRadius()));
  }

  if (player.getPlayerId() == 4) {
    _greenFox.setSpeedText(std::to_string(static_cast<size_t> (player.getSpeedMult() * 10)));
    _greenFox.setNumberOfBombText(std::to_string(player.getBombTab().size()));
    _greenFox.setBombStrengthText(std::to_string(player.getBombTab()[0].getRadius()));
  }
}

void indie::Hud::updateTimerValue(int value)
{
  _timer.setValue(std::to_string(value));
}

void indie::Hud::setEnableTimer(bool enableTimer)
{
  _enableTimer = enableTimer;
}

void indie::Hud::draw()
{
  if (_enableTimer)
    _timer.draw();
  if (_nbPlayers >= 1)
    _orangeFox.draw();
  if (_nbPlayers >= 2)
    _redFox.draw();
  if (_nbPlayers >= 3)
    _blueFox.draw();
  if (_nbPlayers >= 4)
    _greenFox.draw();
}
