/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Box
*/

#pragma once

#include "../IEntity3D.hpp"
#include "../../enum/gameEnum.hpp"
#include "../../raylib_encapsulation/3DShapes/Model3D.hpp"

namespace indie
{
  class Box : public IEntity3D {
    public:
      Box(const Vector3D &position, const std::string &filepath, const entityid::EntityID type);
      ~Box();

      Vector3D getPosition() const;
      void setPosition(const Vector3D &vector);

      entityid::EntityID getID() const;
      void setID(const entityid::EntityID id);

      Collider getCollider() const;

      Model3D getModel();

      void draw();

    protected:
      Vector3D _position;
      Model3D _model;
      entityid::EntityID _id;
  };
}