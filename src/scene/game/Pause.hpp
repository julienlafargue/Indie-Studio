/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Pause
*/

#pragma once
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../entity/Button.hpp"
#include "../../enum/gameEnum.hpp"
#include "../../raylib_encapsulation/Mouse.hpp"

namespace indie {
	class Pause {
		public:
			Pause();
			void drawPauseMenu();
			gamestatus::GameStatus pauseGame(Mouse mouse);
			~Pause();

		protected:
		private:
			TwoDTexture _pauseBox;
			Button _resume;
			Button _settings;
			Button _saveAndQuit;
			Button _quit;
	};
}
