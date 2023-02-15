/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Button
*/

#ifndef BUTTON_HPP_
#define BUTTON_HPP_
#include "../raylib_encapsulation/Shapes/RectangleShape.hpp"
#include "../raylib_encapsulation/Mouse.hpp"
#include "../raylib_encapsulation/TwoDTexture.hpp"
#include "../raylib_encapsulation/Vector2D.hpp"
#include "../raylib_encapsulation/Sound.hpp"

#include "../enum/buttonEnum.hpp"
#include "IEntity2D.hpp"

namespace indie {
    class Button : public IEntity2D {
        public:
            //ctor ~ dtor
            /**
			 * @brief create a button, according to its posX, posY and texture passed to parameters
             * @param posX X axis position
             * @param posY Y axis position
             * @param texturePath path to the wanted texture
			*/
            Button(float posX, float posY, std::string texturePath);
            ~Button();

            //getters
            /**
			 * @brief get button texture rectangle
			 * @return button texture RectangleShape 
			*/
            RectangleShape getTextureRectangleShape() const;
            /**
			 * @brief get button bounds rectangle
			 * @return button bounds RectangleShape 
			*/
            RectangleShape getButtonBounds() const;
            /**
			 * @brief get button state
			 * @return current ButtonState
			*/
            ButtonState getButtonState() const;
            float getButtonWidth() const;
            float getButtonHeight() const;


            //setters

            /**
			 * @brief set button texture rectangle
             * @param textureRectangle button texture rectangle to set
			*/
            void setTextureRectangleShape(RectangleShape textureRectangle);
            /**
			 * @brief set button bounds rectangle
             * @param buttonBounds button bounds rectangle to set
			*/
            void setButtonBounds(RectangleShape buttonBounds);
            /**
			 * @brief set button state
             * @param buttonState button state to set
			*/
            void setButtonState(ButtonState buttonState);
            /**
			 * @brief set button position
             * @param position button position to set
			*/
            void setButtonPosition(Vector2D position);

            //interface functions
            /**
			 * @brief get position
             * @return Vector2D of the current position
			*/
            Vector2D getPosition() const;
            /**
			 * @brief draw the button
			*/
            void draw();

            //member function
            /**
			 * @brief check if the button is pressed
             * @return true if the button is pressed, false otherwise (change also the state of this one)
			*/
            bool isButtonPressed(Mouse mouse);
            void changeTexture(std::string path);

        private:
            TwoDTexture _texture;
            RectangleShape _buttonBounds;
            RectangleShape _textureRectangle;
            ButtonState _buttonState;
    };
}

#endif /* !BUTTON_HPP_ */
