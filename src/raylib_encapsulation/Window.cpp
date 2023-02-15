/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Window
*/

#include "raylib.hpp"
#include "Window.hpp"
#include "../raylib_encapsulation/Input.hpp"
#include <string>

indie::Window::Window()
{
	InitWindow(1920, 1080, "bomberman");
	toggleFullscreen();
	SetTargetFPS(60);
	Input::setExitKey(KEY_DELETE);
}

indie::Window::~Window()
{
}

indie::Window *indie::Window::create(void)
{
	return (modify(true));
}

void indie::Window::destroy(Window *window)
{
	modify(false, window);
}

indie::Window *indie::Window::modify(bool boolean, Window *window)
{
	static unsigned int n = 0;
	if (boolean) {
		Window *result = NULL;
		if (n < 1) {
			n++;
			result = new Window;
		}
		return (result);
	}
	if (window == NULL)
		return (NULL);
	n--;
	delete (window);
	return (NULL);
}

bool indie::Window::shouldClose(void)
{
	return (WindowShouldClose());
}

void indie::Window::close(void)
{
	CloseWindow();
}

bool indie::Window::isReady(void)
{
	return (IsWindowReady());
}

bool indie::Window::isFullscreen(void)
{
	return (IsWindowFullscreen());
}

bool indie::Window::isHidden(void)
{
	return (IsWindowHidden());
}

bool indie::Window::isState(unsigned int flag)
{
	return (IsWindowState(flag));
}

void indie::Window::setState(unsigned int flags)
{
	SetWindowState(flags);
}

void indie::Window::clearState(unsigned int flags)
{
	ClearWindowState(flags);
}

void indie::Window::toggleFullscreen(void)
{
	ToggleFullscreen();
}

void indie::Window::setIcon(Image image)
{
	SetWindowIcon(image);
}

void indie::Window::setTitle(const char *title)
{
	SetWindowTitle(title);
}

void indie::Window::setPosition(int x, int y)
{
	SetWindowPosition(x, y);
}

void indie::Window::setMinSize(int width, int height)
{
	SetWindowMinSize(width, height);
}

void indie::Window::setSize(int width, int height)
{
	SetWindowSize(width, height);
}

void *indie::Window::getHandle(void)
{
	return (GetWindowHandle());
}

indie::Vector2D indie::Window::getPosition(void)
{
	Vector2D vector(GetWindowPosition());
	return vector;
}
