/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Collider
*/

#pragma once

#include "../raylib.hpp"
#include "../../enum/gameEnum.hpp"

namespace indie {
  class Collider {
    public:
      Collider(const BoundingBox &box, const entityid::EntityID id);
      Collider(const Collider &collider);
      Collider();
      ~Collider();

      void set(const BoundingBox &box, const entityid::EntityID id);
      void setBox(const BoundingBox &box);
      void setID(const entityid::EntityID id);

      BoundingBox getBox() const;
      entityid::EntityID getID() const;

    protected:
    private:
      BoundingBox _box;
      entityid::EntityID _id;
  };
}
