/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** IEntity3D
*/

#pragma once

#include "../raylib_encapsulation/Vector3D.hpp"
#include "../raylib_encapsulation/3DShapes/Collider.hpp"

namespace indie {
	class IEntity3D {
		public:
			virtual ~IEntity3D() = default;
      virtual void draw() = 0;
      virtual Vector3D getPosition() const = 0;
      virtual void setPosition(const Vector3D &vector) = 0;
      virtual Collider getCollider() const = 0;
      virtual entityid::EntityID getID() const = 0;
      virtual void setID(const entityid::EntityID vector) = 0;
	};
}
