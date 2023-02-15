/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Audio
*/

#ifndef SOUNDSTREAM_HPP_
#define SOUNDSTREAM_HPP_

#include "raylib.hpp"
#include <string>

namespace indie {
    class SoundStream
    {
    public:
        SoundStream(std::string filepath);
        ~SoundStream();


        //setters
        void setVolume(float volume);
        void setSound(std::string soundFilePath);

        //getters
        float getVolume() const;
        Sound getSound() const;

        //member function
        void loadSound(std::string fileName);
        void playSound();


    protected:
    private:
        Sound _sound;
        float _volume;
    };
}

#endif /* !SOUNDSTREAM_HPP_ */
