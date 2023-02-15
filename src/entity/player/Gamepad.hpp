/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Gamepad
*/

#pragma once

namespace indie
{
  class Gamepad {
    public:
      Gamepad(const int id);
      ~Gamepad();

      void update();

      int getId() const;
      void setId(int id);

      bool isActive();

      bool checkX(const float axis);
      bool checkY(const float axis);

      bool isButtonReleased(int button);
      bool isButtonPressed(int button);
      bool isButtonDown(int button);

    private:
      int _id;
      float _axisX;
      float _axisY;
      int _button;
  };
}