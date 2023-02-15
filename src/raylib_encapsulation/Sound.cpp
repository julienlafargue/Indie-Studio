/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Audio
*/

#include "Sound.hpp"

indie::SoundStream::SoundStream(std::string filepath) : _volume(0)
{
    InitAudioDevice();
    loadSound(filepath);
		SetSoundVolume(_sound, _volume);
}

indie::SoundStream::~SoundStream()
{
    CloseAudioDevice();
}

void indie::SoundStream::playSound()
{
	PlaySoundMulti(_sound);
}

void indie::SoundStream::setVolume(float volume)
{
    _volume = volume;
    SetSoundVolume(_sound,_volume);
}

float indie::SoundStream::getVolume() const
{
  return _volume; 
}

void indie::SoundStream::loadSound(std::string fileName)
{
    _sound = LoadSound(fileName.c_str());
}

void indie::SoundStream::setSound(std::string filepath)
{
  loadSound(filepath);
}

Sound indie::SoundStream::getSound() const
{
    return (_sound);
}
