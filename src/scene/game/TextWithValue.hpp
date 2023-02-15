/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** TextWithValue
*/

#pragma once
#include "../../raylib_encapsulation/Text.hpp"
#include "../../raylib_encapsulation/Vector2D.hpp"



namespace indie {
  class TextWithValue {
    public:
      TextWithValue(Vector2D position, std::string title, int fontSize);
      ~TextWithValue();
      void setValue(std::string value);
      void setPosition(Vector2D position);
      void draw();

    protected:
    private:
      Vector2D _position;
      Text _title;
      Text _value;

  };
}
