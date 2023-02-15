/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Controls
*/

#include "Controls.hpp"

indie::ControlScheme::ControlScheme()
{
}

indie::ControlScheme::ControlScheme(KeyboardKey up, KeyboardKey down, KeyboardKey left, KeyboardKey right, KeyboardKey drop)
{
  _up = up;
  _down = down;
  _left = left;
  _right = right;
  _drop = drop;
}

indie::ControlScheme::~ControlScheme()
{
}

int indie::ControlScheme::getControlUp() const
{
  return _up;
}

int indie::ControlScheme::getControlDown() const
{
  return _down;
}

int indie::ControlScheme::getControlLeft() const
{
  return _left;
}

int indie::ControlScheme::getControlRight() const
{
  return _right;
}

int indie::ControlScheme::getControlAction() const
{
  return _drop;
}

void indie::ControlScheme::setControlUp(int move)
{
  _up = move;
}

void indie::ControlScheme::setControlDown(int move)
{
  _down = move;
}

void indie::ControlScheme::setControlLeft(int move)
{
  _left = move;
}

void indie::ControlScheme::setControlRight(int move)
{
  _right = move;
}

void indie::ControlScheme::setControlAction(int move)
{
   _drop = move;
}
