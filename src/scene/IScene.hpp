/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** IScene
*/

#pragma once

#include "../enum/sceneEnum.hpp"
#include "../core/CoreParameters.hpp"
#include "../core/GameParameters.hpp"


namespace indie
{
	class IScene
	{
	public:
		virtual ~IScene() = default;
		virtual void sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters) = 0;
		virtual void changeCoreParameters(indie::CoreParameters &) = 0;
		virtual void changeGameParameters(indie::GameParameters &) = 0;
		virtual void draw() = 0;
	};
}
