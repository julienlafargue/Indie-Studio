/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** CoreParameters
*/

#include "CoreParameters.hpp"

using namespace indie;

CoreParameters::CoreParameters()
{
}

CoreParameters::~CoreParameters()
{
}

//getters
float CoreParameters::getMusicVolume() const
{
  return _musicVolume;
}

float CoreParameters::getSoundsVolume() const
{
  return _soundsVolume;
}

SCENE_ID CoreParameters::getCurrentScene() const
{
  return _currentScene;
}

CommandMode CoreParameters::getCommandMode() const
{
  return _commandMode;
}

//setters
void CoreParameters::setSoundsVolume(float soundsVolume)
{
  _soundsVolume = soundsVolume;
}
void CoreParameters::setMusicVolume(float musicVolume)
{
  _musicVolume = musicVolume;
}

void CoreParameters::setCurrentScene(SCENE_ID sceneId)
{
  _currentScene = sceneId;
}

void CoreParameters::setCommandMode(CommandMode mode)
{
  _commandMode = mode;
}

CoreParameters &CoreParameters::operator=(CoreParameters &newCoreParameters)
{
  _musicVolume = newCoreParameters.getMusicVolume();
  _soundsVolume = newCoreParameters.getSoundsVolume();
  _currentScene = newCoreParameters.getCurrentScene();
  _commandMode = newCoreParameters.getCommandMode();
  return *this;
}

// member functions

bool CoreParameters::isGameLaunched()
{
  return this->_gameLaunched;
}

void CoreParameters::launchGame()
{
  this->_gameLaunched = true;
}

void CoreParameters::stopGame()
{
  this->_gameLaunched = false;
}
