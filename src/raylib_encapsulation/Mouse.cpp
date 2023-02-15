/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Cursor
*/

#include "Mouse.hpp"

void show(void)
{
  ShowCursor();
}

void hide(void)
{
  HideCursor();
}

bool isHidden(void)
{
  return (IsCursorHidden());
}

void enable(void)
{
  EnableCursor();
}

void disable(void)
{
  DisableCursor();
}

bool isOnScreen(void)
{
  return (IsCursorOnScreen());
}

bool isMouseButtonPressed(int button)
{
  return (IsMouseButtonPressed(button));
}

bool isMouseButtonDown(int button)
{
  return (IsMouseButtonDown(button));
}

bool isMouseButtonReleased(int button)
{
  return (IsMouseButtonReleased(button));
}

bool isMouseButtonUp(int button)
{
  return (IsMouseButtonUp(button));
}

int getMouseX(void)
{
  return (GetMouseX());
}

int getMouseY(void)
{
  return (GetMouseY());
}

indie::Vector2D indie::Mouse::getPosition(void)
{
  return (Vector2D(GetMousePosition()));
}

Ray getMouseRay(Camera camera)
{
  return (GetMouseRay(GetMousePosition(), camera));
}

indie::Vector2D getMouseDelta(void)
{
  return (indie::Vector2D(GetMouseDelta()));
}

void setMousePosition(int x, int y)
{
  SetMousePosition(x, y);
}

void setMouseOffset(int offsetX, int offsetY)
{
  SetMouseOffset(offsetX, offsetY);
}

void setMouseScale(float scaleX, float scaleY)
{
  SetMouseScale(scaleX, scaleY);
}

float getMouseWheelMove(void)
{
  return (GetMouseWheelMove());
}

void setMouseCursor(int cursor)
{
  SetMouseCursor(cursor);
}

bool indie::Mouse::isLeftButtonCLicked()
{
  return (isMouseButtonReleased(MOUSE_BUTTON_LEFT));
}

bool indie::Mouse::isLeftButtonDown()
{
  return (isMouseButtonDown(MOUSE_BUTTON_LEFT));
}

indie::Mouse::Mouse()
{

}

indie::Mouse::~Mouse()
{

}