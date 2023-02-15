/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Draw
*/

#include "Draw.hpp"

using namespace indie;

void Draw::clearBackground(Color color)
{
	ClearBackground(color);
}

void Draw::beginDrawing(void)
{
	BeginDrawing();
}

void Draw::endDrawing(void)
{
	EndDrawing();
}

void Draw::beginMode2D(Camera2D camera)
{
	BeginMode2D(camera);
}

void Draw::endMode2D(void)
{
	EndMode2D();
}

void Draw::beginMode3D(Camera3D camera)
{
	BeginMode3D(camera);
}

void Draw::endMode3D(void)
{
	EndMode3D();
}

void Draw::beginTextureMode(RenderTexture2D target)
{
	BeginTextureMode(target);
}

void Draw::endTextureMode(void)
{
	EndTextureMode();
}

void Draw::beginShaderMode(Shader shader)
{
	BeginShaderMode(shader);
}

void Draw::endShaderMode(void)
{
	EndShaderMode();
}

void Draw::beginBlendMode(int mode)
{
	BeginBlendMode(mode);
}

void Draw::endBlendMode(void)
{
	EndBlendMode();
}

void Draw::beginScissorMode(int x, int y, int width, int height)
{
	BeginScissorMode(x, y, width, height);
}

void Draw::endScissorMode(void)
{
	EndScissorMode();
}