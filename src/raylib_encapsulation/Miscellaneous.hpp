/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Miscs
*/

#ifndef MISCS_HPP_
#define MISCS_HPP_

#include "raylib.hpp"
#include <string>

namespace indie {
	class Miscellaneous {
		public:
			static void setTargetFPS(int fps);
			static int getFPS();
			static float getFrameTime();
			static double getTime();
			static int getRandomValue(int min, int max);
			static void setRandomSeed(unsigned int seed);
			static void takeScreenshot(const std::string fileName);
			static void setConfigFlags(unsigned int flags);
		};
}

#endif /* !MISCS_HPP_ */
