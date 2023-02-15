/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** MapPattern
*/

#pragma once

#include <vector>
#include <string>

namespace indie {
	class MapPattern {
		public:
			MapPattern();
			~MapPattern();

			std::string getBoxPattern(size_t index) const;

		private:
			std::vector<std::string> _box;
	};
}
