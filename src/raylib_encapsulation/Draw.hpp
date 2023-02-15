/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Draw
*/

#ifndef DRAW_HPP_
#define DRAW_HPP_

#include "raylib.hpp"

namespace indie {
	class Draw {
		public:
			Draw();
			~Draw();
			static void clearBackground(Color color);
			static void beginDrawing(void);
			static void endDrawing(void);
			void beginMode2D(Camera2D camera);
			void endMode2D(void);
			static void beginMode3D(Camera3D camera);
			static void endMode3D(void);
			void beginTextureMode(RenderTexture2D target);
			void endTextureMode(void);
			void beginShaderMode(Shader shader);
			void endShaderMode(void);
			void beginBlendMode(int mode);
			void endBlendMode(void);
			void beginScissorMode(int x, int y, int width, int height);
			void endScissorMode(void);
	};
}

#endif /* !DRAW_HPP_ */
