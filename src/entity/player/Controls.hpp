/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Controls
*/

#pragma once

#include "../../raylib_encapsulation/raylib.hpp"

namespace indie
{
  class ControlScheme
  {
    public:
      ControlScheme();
      ControlScheme(KeyboardKey up, KeyboardKey down, KeyboardKey left, KeyboardKey right, KeyboardKey drop);
      ~ControlScheme();
      int getControlUp() const;
      int getControlDown() const;
      int getControlLeft() const;
      int getControlRight() const;
      int getControlAction() const;
      void setControlUp(int move);
      void setControlDown(int move);
      void setControlLeft(int move);
      void setControlRight(int move);
      void setControlAction(int move);

    private:
      int _up;
      int _down;
      int _left;
      int _right;
      int _drop;
  };
}