/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** GameParameters
*/

#include "GameParameters.hpp"

indie::GameParameters::GameParameters()
{
}

indie::GameParameters::~GameParameters()
{
}

//getters
int indie::GameParameters::getTimer() const
{
  return _timer;
}

bool indie::GameParameters::getEnableTimer() const
{
  return _enableTimer;
}

int indie::GameParameters::getNbIA() const
{
  return _nbIA;
}

int indie::GameParameters::getNbPLayer() const
{
  return _nbPlayer;
}

indie::gamemode::GameMode indie::GameParameters::getCurrentGameMode() const
{
  return _currentGameMode;
}

//setters
void indie::GameParameters::setEnabledTimer(bool isEnabledPlayer)
{
  _enableTimer = isEnabledPlayer;
}

void indie::GameParameters::setTimer(int timer)
{
  _timer = timer;
}

void indie::GameParameters::setNbIA(int nbIA)
{
  _nbIA = nbIA;
}

void indie::GameParameters::setNbPLayer(int nbPlayer)
{
  _nbPlayer = nbPlayer;
}

void indie::GameParameters::setCurrentGameMode(gamemode::GameMode gameMode)
{
  _currentGameMode = gameMode;
}

void indie::GameParameters::setNbPlayerAtLaunch(int nbPlayerAtLaunch)
{
  _nbPlayerAtLaunch = nbPlayerAtLaunch;
}

int indie::GameParameters::getNbPlayerAtLaunch() const
{
  return _nbPlayerAtLaunch;
}
