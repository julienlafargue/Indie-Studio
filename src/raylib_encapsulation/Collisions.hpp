/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Collisions
*/

#pragma once
#include "raylib.hpp"
#include "../enum/gameEnum.hpp"
#include "3DShapes/Collider.hpp"

#include <vector>

namespace indie {
	class Collisions {
		public:
			Collisions();
			~Collisions();
			static bool checkCollisionBoxes(BoundingBox box1, BoundingBox box2);
			static entityid::EntityID checkCollisions(const std::vector<Collider> &entities, const Collider &entity);
		protected:
		private:
	};
}
