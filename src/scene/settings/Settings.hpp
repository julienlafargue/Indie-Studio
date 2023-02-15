/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Settings
*/

#pragma once
#define	MAX_VOLUME 10
#define	MIN_VOLUME 0

#include "../IScene.hpp"
#include "../../enum/buttonEnum.hpp"
#include "../../entity/Button.hpp"
#include "../../raylib_encapsulation/Mouse.hpp"
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../raylib_encapsulation/Draw.hpp"
#include "../../core/CoreParameters.hpp"
#include "ScrollableValue.hpp"

namespace indie {
	class Settings : public IScene {
		public:
			Settings();
			~Settings();
		
			//interface functions
			/**
			 * @brief draw current scene
			*/
			void draw();
			/**
			 * @brief loop of the current scene 
			*/
			void sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters);
			/**
			 * @brief change coreParameters
			*/
			void changeCoreParameters(CoreParameters &coreParameters);
      void changeGameParameters(GameParameters &);

		private:
			TwoDTexture _background;
			Button _buttonBack;
			Button _buttonCommands;
			Button _buttonSwitchCommandMode;
			CoreParameters _coreParameters;
			Mouse _mouse;
			ScrollableValue _musicVolume;
	};
}
