/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Core
*/

#include "Input.hpp"

/*keyboard*/

using namespace indie;

bool Input::isKeyPressed(int key)
{
	return(IsKeyPressed(key));
}

bool Input::isKeyDown(int key)
{
	return(IsKeyDown(key));
}

bool Input::isKeyReleased(int key)
{
	return(IsKeyReleased(key));
}

bool Input::isKeyUp(int key)
{
	return(IsKeyUp(key));
}

void Input::setExitKey(int key)
{
	return(SetExitKey(key));
}

int Input::getKeyPressed(void)
{
	return(GetKeyPressed());
}

int Input::getCharPressed(void)
{
	return(GetCharPressed());
}

/*gamepads*/
const std::string Input::getGamepadName(int gamepad)
{
	return static_cast<std::string>(GetGamepadName(gamepad));
}

bool Input::isGamepadAvailable(int gamepad)
{
	return (IsGamepadAvailable(gamepad));
}

bool Input::isGamepadButtonPressed(int gamepad, int button)
{
	return (IsGamepadButtonPressed(gamepad, button));
}

bool Input::isGamepadButtonDown(int gamepad, int button)
{
	return (IsGamepadButtonDown(gamepad, button));
}

bool Input::isGamepadButtonReleased(int gamepad, int button)
{
	return (IsGamepadButtonReleased(gamepad, button));
}

bool Input::isGamepadButtonUp(int gamepad, int button)
{
	return (IsGamepadButtonUp(gamepad, button));
}

int Input::getGamepadButtonPressed(void)
{
	return (GetGamepadButtonPressed());
}

int Input::getGamepadAxisCount(int gamepad)
{
	return (GetGamepadAxisCount(gamepad));
}

float Input::getGamepadAxisMovement(int gamepad, int axis)
{
	return (GetGamepadAxisMovement(gamepad, axis));
}

int Input::setGamepadMappings(const std::string mappings)
{
	return (SetGamepadMappings(mappings.c_str()));
}
