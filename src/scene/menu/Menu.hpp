/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Menu
*/

#ifndef MENU_HPP_
#define MENU_HPP_

#include <vector>
#include <string>
#include <memory>
#include "../IScene.hpp"
#include "../entity/Button.hpp"
#include "../raylib_encapsulation/Mouse.hpp"
#include "../raylib_encapsulation/Draw.hpp"
#include "../enum/sceneEnum.hpp"
#include "Parallax.hpp"

namespace indie {
	class Menu : public IScene {
		public:
			Menu();
			~Menu();
			//interface functions
			/**
			 * @brief draw menu
			*/
			void draw();
			/**
			 * @brief change the coreParameters
			*/
			void changeCoreParameters(CoreParameters &coreParameters);
			/**
			 * @brief loop of the current scene 
			*/
			void sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters);
      void changeGameParameters(GameParameters &);
			//member function

		protected:
		private:
			TwoDTexture _gameTitle;
			TwoDTexture _placehold;
			Button _buttonStart;
			Button _buttonSettings;
			Button _buttonQuit;
			Parallax _background;
			Mouse _mouse;
	};
}

#endif /* !MENU_HPP_ */
