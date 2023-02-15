/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** FoxBox
*/

#pragma once
#include "../../raylib_encapsulation/Text.hpp"
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../raylib_encapsulation/Vector2D.hpp"
#include "TextWithValue.hpp"



namespace indie {
  class FoxBox {
    public:
      FoxBox(Vector2D position, std::string boxFoxPath, std::string title);
      ~FoxBox();
      void draw();
      void setNumberOfBombText(std::string numberOfBomb);
      void setBombStrengthText(std::string bombStrength);
      void setSpeedText(std::string speed);
      void setCanWallPassText(std::string canWallPath);
      void setPosition(Vector2D canWallPath);
      Vector2D getPosition() const;
    protected:
    private:
      Vector2D _position;
      Text _title;
      TextWithValue _bombStrengthText;
      TextWithValue _numberOfBombText;
      TextWithValue _speedText;
      TextWithValue _canWallPassText;
      TwoDTexture _boxFox;
  };
}
