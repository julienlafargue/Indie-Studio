/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Gamepad
*/

#include "../../raylib_encapsulation/raylib.hpp"
#include "../../raylib_encapsulation/Input.hpp"
#include "Gamepad.hpp"

using namespace indie;

Gamepad::Gamepad(const int id)
{
  _id = id;
}

Gamepad::~Gamepad()
{}

void Gamepad::update()
{
  _axisX = Input::getGamepadAxisMovement(_id, GAMEPAD_AXIS_LEFT_X);
  _axisY = Input::getGamepadAxisMovement(_id, GAMEPAD_AXIS_LEFT_Y);
}

int Gamepad::getId() const
{
  return (_id);
}

void Gamepad::setId(int id)
{
  _id = id;
}

bool Gamepad::isActive()
{
  return (Input::isGamepadAvailable(_id));
}

bool Gamepad::checkX(const float axis)
{
  update();
  if (_axisX == 0)
    return (false);
  if (axis < 0) {
    if (_axisX < _axisY)
      return (true);
  } else
    if (_axisX > _axisY)
      return (true);
  return (false);
}

bool Gamepad::checkY(const float axis)
{
  update();
  if (_axisY == 0)
    return (false);
  if (axis < 0) {
    if (_axisX > _axisY)
      return (true);
  } else
    if (_axisX < _axisY)
      return (true);
  return (false);
}

bool Gamepad::isButtonReleased(int button)
{
  return (Input::isGamepadButtonReleased(_id, button));
}

bool Gamepad::isButtonPressed(int button)
{
  return (Input::isGamepadButtonReleased(_id, button));
}

bool Gamepad::isButtonDown(int button)
{
  return (Input::isGamepadButtonDown(_id, button));
}
