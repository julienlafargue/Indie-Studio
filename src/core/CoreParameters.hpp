/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** CoreParameters
*/

#pragma once
#include <string>
#include "../enum/sceneEnum.hpp"
#include "../enum/commandModeEnum.hpp"

namespace indie {
	class CoreParameters {
		public:
			CoreParameters();
			~CoreParameters();

			//getters
			/**
			 * @brief get the volume property
			 * @return size_t volume
			 */
			float getMusicVolume() const;
			float getSoundsVolume() const;
			SCENE_ID getCurrentScene() const;
			CommandMode getCommandMode() const;

			//setters
			/**
			 * @brief set the volume property
			 * @param volume float volume to set
			 */
			void setMusicVolume(float MusicVolume);
			void setSoundsVolume(float soundsVolume);
			void setCurrentScene(SCENE_ID);
			void setCommandMode(CommandMode);

			//member function
			bool isGameLaunched();
			void launchGame();
			void stopGame();

			//oprators
			CoreParameters &operator=(CoreParameters &);
		private:
			float _musicVolume;
			float _soundsVolume;
			CommandMode _commandMode;
			SCENE_ID _currentScene;
			bool _gameLaunched = false;
	};
}
