/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Miscs
*/

#include "Miscellaneous.hpp"

using namespace indie;

void Miscellaneous::setTargetFPS(int fps)
{
	SetTargetFPS(fps);
}

int Miscellaneous::getFPS()
{
	return(GetFPS());
}

float Miscellaneous::getFrameTime()
{
	return(GetFrameTime());
}

double Miscellaneous::getTime()
{
	return(GetTime());
}

int Miscellaneous::getRandomValue(int min, int max)
{
	return(GetRandomValue(min, max));
}

void Miscellaneous::setRandomSeed(unsigned int seed)
{
	SetRandomSeed(seed);
}

void Miscellaneous::takeScreenshot(const std::string fileName)
{
	TakeScreenshot(fileName.c_str());
}

void Miscellaneous::setConfigFlags(unsigned int flags)
{
	SetConfigFlags(flags);
}
