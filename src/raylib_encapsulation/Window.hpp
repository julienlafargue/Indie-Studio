/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Window
*/

#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include "raylib.hpp"
#include <string>
#include "Vector2D.hpp"

namespace indie
{
	class Window {
		public:
			/**
			* @brief Creates an object window
			*
			* @return An object Window
			*/
			static Window* create(void);
			/**
			* @brief Destroys an object window
			*
			* @param Window Object Window to destroy
			*/
			static void destroy(Window*);
			/**
			* @brief Checks if the window should close
			*
			* @return True if Escape Key or Cose icon are pressed, False otherwise
			*/
			bool shouldClose(void);
			/**
			* @brief Closes the window
			*/
			void close(void);
			/**
			 * @brief Checks the window initialization
			 * 
			 * @return True if the window has been successfully initialized, False otherwise
			 */
			bool isReady(void);
			/**
			 * @brief Checks the window format
			 * 
			 * @return True if the window is in full screen mod, False otherwise
			 */
			bool isFullscreen(void);
			/**
			 * @brief Checks the window format
			 * 
			 * @return True if the window is in hidden mod, False otherwise
			 */
			bool isHidden(void);
			/**
			 * @brief Checks window flags state
			 * 
			 * @param flag 
			 * 
			 * @return True if one or more specific flags are enabled, False otherwise
			 */
			bool isState(unsigned int flag);
			/**
			 * @brief Configures the window using flag
			 * 
			 * @param flags flag to add to window configuration
			 */
			void setState(unsigned int flags);
			/**
			 * @brief Clears window configuration state flag
			 * 
			 * @param flags flag to remove form the configuration
			 */
			void clearState(unsigned int flags);
			/**
			 * @brief Sets/Unsets fullscreen
			 * 
			 */
			void toggleFullscreen(void);
			/**
			 * @brief Sets the Icon for the window
			 * 
			 * @param image image used to create the icon
			 */
			void setIcon(Image image);
			/**
			 * @brief Sets the Title of the window
			 * 
			 * @param title string used for the title
			 */
			void setTitle(const char *title);
			/**
			 * @brief Sets the Position of the window on screen
			 * 
			 * @param x abscissa of the window
			 * @param y ordinate of the window
			 */
			void setPosition(int x, int y);
			/**
			 * @brief Sets the minimal size of the window
			 * 
			 * @param width width
			 * @param height height
			 */
			void setMinSize(int width, int height);
			/**
			 * @brief Sets the size of the window
			 * 
			 * @param width width
			 * @param height height
			 */
			void setSize(int width, int height);
			/**
			 * @brief Gets the Handle of the window
			 * 
			 * @return pointer to the handle of the window
			 */
			void *getHandle(void);
			/**
			 * @brief Gets the position of the window
			 * 
			 * @return a Vector2D object
			 */
			Vector2D getPosition(void);
			~Window();

		private:
			Window();
			static Window* modify(bool boolean, Window* window = NULL);
			int _width;
			int _height;
			std::string _title;
	};
}

#endif /* !WINDOW_HPP_ */
