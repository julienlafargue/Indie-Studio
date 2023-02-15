/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Core
*/

#pragma once

#include "../scene/IScene.hpp"
#include "../raylib_encapsulation/Window.hpp"
#include "../raylib_encapsulation/Music.hpp"
#include "CoreParameters.hpp"
#include <map>
#include <memory>

namespace indie {
	class Core {
		public:
			Core();
			~Core();
			int startCore();
			void setStatus(int code);
			int checkStatus();

		protected:
		private:
			MusicStream _music;
			int _exitStatus = 0;
			CoreParameters _parameters;
			GameParameters _gameParameters;
			Window *_window;
			std::map<SCENE_ID, std::shared_ptr<IScene>> _sceneList;
	};
}
