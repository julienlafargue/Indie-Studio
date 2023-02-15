/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** MapGeneration
*/

#pragma once

#include "MapPattern.hpp"
#include "../../enum/gameEnum.hpp"
#include "../../raylib_encapsulation/Vector3D.hpp"

namespace indie {
	class MapGeneration {
		public:
			MapGeneration();
			~MapGeneration();

      void generateMap(gamemode::GameMode gamemode, unsigned int seed);
      void generateMap(gamemode::GameMode gamemode);

			void setMap();
			void generate();
			std::vector<std::string> getMap() const;

      void clearMap();

		private:
			void mixSeed();
			void setBox(char box, int x, int y);
			void usePattern(int index, int x, int y);

			MapPattern _pattern;
			std::vector<std::string> _map;
			unsigned int _seed;
			gamemode::GameMode _gamemode;
	};
}
