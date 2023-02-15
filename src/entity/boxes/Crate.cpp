/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Crate
*/
#include "Crate.hpp"
#include <vector>
#include "../../raylib_encapsulation/Collisions.hpp"

using namespace indie;

Crate::Crate(const Vector3D &position) : Box(position, "assets/scenes/Game/Cube_Crate.gltf", entityid::CRATE)
{
  _status = true;
}

Crate::~Crate()
{
}

void Crate::destroy()
{
  _status = false;
}

bool Crate::getStatus() const
{
  return (_status);
}

void Crate::updateEntityList(std::vector<Model3D> new_list)
{
  _entityList = new_list;
  
}

void Crate::checkCollisions(const std::vector<Collider> &coll)
{
  entityid::EntityID tmp = Collisions::checkCollisions(coll, getCollider());
  if (tmp == entityid::BLOW)
    _status = false;
}
