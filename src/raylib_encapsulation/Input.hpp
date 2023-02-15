/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Core
*/

#pragma once

#include "raylib.hpp"
#include <string>

namespace indie {
	class Input {
		public:
			/* keyboard */
			static bool isKeyPressed(int key);
			static bool isKeyDown(int key);
			static bool isKeyReleased(int key);
			static bool isKeyUp(int key);
			static void setExitKey(int key);
			static int getKeyPressed(void);
			static int getCharPressed(void);

			/* controller */
			static bool isGamepadAvailable(int gamepad);
			static const std::string getGamepadName(int gamepad);
			static bool isGamepadButtonPressed(int gamepad, int button);
			static bool isGamepadButtonDown(int gamepad, int button);
			static bool isGamepadButtonReleased(int gamepad, int button);
			static bool isGamepadButtonUp(int gamepad, int button);
			static int getGamepadButtonPressed(void);
			static int getGamepadAxisCount(int gamepad);
			static float getGamepadAxisMovement(int gamepad, int axis);
			static int setGamepadMappings(const std::string mappings);
	};
}
