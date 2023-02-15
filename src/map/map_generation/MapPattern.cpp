/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** MapPattern
*/

#include "MapPattern.hpp"

namespace indie {
	MapPattern::MapPattern()
	{
		_box.push_back("  O  ");
		_box.push_back("  O  ");
		_box.push_back(" OOO ");
		_box.push_back("OO OO");
		_box.push_back("OOOOO");
		_box.push_back("OOOOO");
		_box.push_back("OO OO");
		_box.push_back("OOOOO");
		_box.push_back("OOOOO");
		_box.push_back("OOOOO");
	}

	MapPattern::~MapPattern()
	{
	}

	std::string MapPattern::getBoxPattern(size_t index) const
	{
		if (index > _box.size())
			index -= _box.size();
		return (_box[index]);
	}
}
