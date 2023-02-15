/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Mouse
*/

#ifndef MOUSE_HPP_
#define MOUSE_HPP_

#include "raylib.hpp"
#include "Vector2D.hpp"

namespace indie
{
    class Mouse
    {
    public:
        Mouse();
        ~Mouse();
        bool isLeftButtonCLicked();
        bool isLeftButtonDown();
        indie::Vector2D getPosition(void);
        void show(void);
        void hide(void);
        bool isHidden(void);
        void enable(void);
        void disable(void);
        bool isOnScreen(void);

        indie::Vector2D getMouseDelta(void);
        Ray getMouseRay(Camera camera);
        void setMousePosition(int x, int y);
        void setMouseOffset(int offsetX, int offsetY);
        void setMouseScale(float scaleX, float scaleY);
        float getMouseWheelMove(void);
        void setMouseCursor(int cursor);
        
        private:
    };
};
#endif