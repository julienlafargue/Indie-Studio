/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Timer
*/

#include "Timer.hpp"

using namespace indie;

Timer::Timer()
{
    _active = false;
}

Timer::~Timer()
{}

void Timer::start()
{
    if (_active != true) {
        _start = std::chrono::system_clock::now();
        _active = true;
    }
}

void Timer::stop()
{
    _active = false;
}

void Timer::restart()
{
    _start = std::chrono::system_clock::now();
}

float Timer::update()
{
    std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();

    return (std::chrono::duration_cast<std::chrono::milliseconds>(end - _start).count());
}

bool Timer::getStatus()
{
    return (_active);
}
