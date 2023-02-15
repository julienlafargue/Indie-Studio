/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** PowerUp
*/

#include "PowerUp.hpp"
#include "../../raylib_encapsulation/Collisions.hpp"

using namespace indie;

PowerUp::PowerUp(const Vector3D &position, const std::string &filepath, entityid::EntityID type) : Box(position, filepath, type)
{
}

PowerUp::~PowerUp()
{
}

bool PowerUp::checkCollisions(const std::vector<Collider> &models)
{
  Collider coll(_model.getBoundingBox(), _id);
  if (Collisions::checkCollisions(models, coll) == entityid::PLAYER)
    return (true);
  return (false);
}
