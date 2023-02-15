/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Timer
*/

#pragma once

#include <chrono>

namespace indie
{
    class Timer {
        public:
            Timer();
            ~Timer();

            void start();
            void stop();
            void restart();
            float update();
            bool getStatus();
        private:
            bool _active;
            std::chrono::time_point<std::chrono::system_clock> _start;
    };
}