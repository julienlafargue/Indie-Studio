/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** ScrollableValue
*/

#pragma once
#include "../../entity/Button.hpp"
#include "../../raylib_encapsulation/Text.hpp"
#include "../../raylib_encapsulation/Vector2D.hpp"
#include "../../raylib_encapsulation/TwoDTexture.hpp"

namespace indie {
  class ScrollableValue {
    public:
    /**
     * @brief create a value template with a deacreaser and a decreaser
     * @param position position of the scrollable value
     * @param title Title of the Scrollable value
     * @param Value Scrollable value
    */
      ScrollableValue(Vector2D position, std::string title, bool enableBox);
      ScrollableValue(Vector2D position, std::string title, std::string boxSize, bool enableBox);
      ~ScrollableValue();

      //getters
      Text getTitle() const;
      Text getTextValue() const;
      Vector2D getPosition();


      //setters
      void setTitle(std::string title);
      void setTextvalue(Text value);
      void setPosition(Vector2D position);

      //member function
      /**
       * @brief modify the value param, depending in the min and max and scale
       * @param min if value <= min, nothing happen
       * @param max if value >= max, nothing happen
       * @param scale your value wille be increased / decreased by scale
      */
      float modifyValue(float value, float min, float max, float scale);
      int modifyValue(int value, float min, float max, float scale);

      void draw();

    protected:
    private:
      Mouse _mouse;
      Text _title;
      Button _buttonDecrease;
      Button _buttonIncrease;
      Vector2D _position;
      Text _textValue;
      TwoDTexture _box;
      bool _isBox;
  };
}
