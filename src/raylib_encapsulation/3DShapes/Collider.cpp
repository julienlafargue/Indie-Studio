/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Collider
*/

#include "Collider.hpp"

using namespace indie;

Collider::Collider(const BoundingBox &box, const entityid::EntityID id)
{
  _box = box;
  _id = id;
}

Collider::Collider(const Collider &collider)
{
  _box = collider.getBox();
  _id = collider.getID();;
}

Collider::Collider()
{}

Collider::~Collider()
{}

void Collider::set(const BoundingBox &box, const entityid::EntityID id)
{
  _box = box;
  _id = id;
}

void Collider::setBox(const BoundingBox &box)
{
  _box = box;
}

void Collider::setID(const entityid::EntityID id)
{
  _id = id;
}

BoundingBox Collider::getBox() const
{
  return (_box);
}

entityid::EntityID Collider::getID() const
{
  return (_id);
}
