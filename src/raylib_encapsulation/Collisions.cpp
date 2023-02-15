/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Collisions
*/

#include "Collisions.hpp"
#include <vector>
#include <string>

using namespace indie;

Collisions::Collisions()
{
}

bool Collisions::checkCollisionBoxes(BoundingBox box1, BoundingBox box2)
{
	return CheckCollisionBoxes(box1, box2);
}

entityid::EntityID Collisions::checkCollisions(const std::vector<Collider> &entities, const Collider &entity)
{
	for (size_t i = 0; i < entities.size(); i++) {
		if (checkCollisionBoxes(entities[i].getBox(), entity.getBox()) == true &&
		entities[i].getID() != entity.getID()) {
			return (entities[i].getID());
		}
	}
	return (entityid::NONE);
}

Collisions::~Collisions()
{
}
