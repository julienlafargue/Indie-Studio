/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** GameParameters
*/

#pragma once
#include "../enum/gameEnum.hpp"

namespace indie {
	class GameParameters {
		public:
			GameParameters();
			~GameParameters();

			//getters
			int getTimer() const;
			bool getEnableTimer() const;
			int getNbPLayer() const;
			int getNbIA() const;
			gamemode::GameMode getCurrentGameMode() const;
			int getNbPlayerAtLaunch() const;

			//setters
			void setTimer(int timer);
			void setEnabledTimer(bool isTimerEnabled);
			void setNbPLayer(int nbPlayer);
			void setNbPlayerAtLaunch(int nbPlayerAtLaunch);
			void setNbIA(int nbIA);
			void setCurrentGameMode(gamemode::GameMode gameMode);



		private:
			gamemode::GameMode _currentGameMode;
			int _timer;
			bool _enableTimer;
			int _nbPlayer;
			int _nbPlayerAtLaunch;
			int _nbIA;
	};
}
