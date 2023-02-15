/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** MapGeneration
*/

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <algorithm>
#include "MapGeneration.hpp"

namespace indie
{
	MapGeneration::MapGeneration() : _pattern()
	{}

	MapGeneration::~MapGeneration()
	{
	}

  void MapGeneration::generateMap(gamemode::GameMode gamemode, unsigned int seed)
  {
    _gamemode = gamemode;
    _seed = seed;
    setMap();
  }

  void MapGeneration::generateMap(gamemode::GameMode gamemode)
  {
    _gamemode = gamemode;
		std::srand(std::time(nullptr));
		_seed = std::rand();
    setMap();
  }

	void MapGeneration::setMap()
	{
		std::ifstream file;
		std::string str;

		if (_gamemode != gamemode::NORMAL)
		{
			file.open("assets/scenes/Game/map-templates/empty");
		}
		else
		{
			file.open("assets/scenes/Game/map-templates/basic");
		}
		if (file.fail())
			exit(84);
		while (std::getline(file, str))
			_map.push_back(str);
	}

	void MapGeneration::generate()
	{
		int index;

		if (!_seed || _gamemode != gamemode::NORMAL)
			return;
		for (auto iteratory = _map.begin() + 1; iteratory < _map.end(); iteratory += 2)
		{
			for (auto iteratorx = iteratory.base()->begin() + 1; iteratorx < iteratory.base()->end(); iteratorx += 2)
			{
				index = _seed % 10;
				usePattern(index, iteratorx - iteratory.base()->begin(), iteratory - _map.begin());
				_seed /= 10;
				_seed += index * 1000000;
			}
			mixSeed();
		}
	}

	std::vector<std::string> MapGeneration::getMap() const
	{
		return (_map);
	}

	void MapGeneration::mixSeed()
	{
		std::vector<int> seed;
		size_t nb2 = _seed % (_map.size() / 2 + 1);

		while (_seed > 0) {
			seed.push_back(_seed % 10);
			_seed /= 10;
		}

		for (size_t nb = 0; nb < seed.size(); nb += 2)
		{
			std::iter_swap(seed.begin() + nb, seed.begin() + nb2);
			nb2 += 2;
			if (nb2 >= seed.size())
				nb2 = nb2 % seed.size();
		}

		for (auto iterator : seed)
		{
			_seed *= 10;
			_seed += iterator;
		}
	}

	void MapGeneration::setBox(char box, int x, int y)
	{
		if (_map[y][x] == ' ' || _map[y][x] == 'O')
			_map[y][x] = box;
	}

	void MapGeneration::usePattern(int index, int x, int y)
	{
		if (_map[y][x] == 'P')
			return;
		setBox(_pattern.getBoxPattern(index)[0], x, y - 1);
		setBox(_pattern.getBoxPattern(index)[1], x - 1, y);
		setBox(_pattern.getBoxPattern(index)[2], x, y);
		setBox(_pattern.getBoxPattern(index)[3], x, y + 1);
		setBox(_pattern.getBoxPattern(index)[4], x + 1, y);
	}

  void MapGeneration::clearMap()
  {
    _map.clear();
    _seed = 0;
    _gamemode = gamemode::NORMAL;
  }
}
