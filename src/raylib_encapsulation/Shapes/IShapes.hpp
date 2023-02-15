/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** IShapes
*/

#ifndef ISHAPES_HPP_
#define ISHAPES_HPP_
#include "../Vector2D.hpp"
#include "../Vector3D.hpp"

class IShapes {
	public:
		virtual ~IShapes() = default;
		virtual void DrawShape() = 0;
};

#endif /* !ISHAPES_HPP_ */
