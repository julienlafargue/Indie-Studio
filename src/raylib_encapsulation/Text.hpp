/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Text
*/

#ifndef TEXT_HPP_
#define TEXT_HPP_

#include "raylib.hpp"
#include "Vector2D.hpp"
#include <string>

namespace indie
{
    class Text
    {
    public:
        Text(std::string text, Vector2D position, int fontSize, Color color);
        ~Text();
        void draw();
        void setText(std::string text);
        void setSize(int size);
        void setPosition(Vector2D);
        float getSize() const;
        Vector2D getPosition() const;
        void setColor(Color color);
        unsigned int getTextLength() const;
        int getFontSize() const;
        char *getText() const;

    private:
        std::string _text;
        Vector2D _position;
        int _fontSize;
        Color _color = {0, 0, 0, 0};
    };
}
#endif /* !TEXT_HPP_ */
