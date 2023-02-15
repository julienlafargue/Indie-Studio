/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** PowerUp
*/

#pragma once

#include "Box.hpp"
#include "../player/Player.hpp"

namespace indie
{
  class PowerUp : public Box {
    public:
      PowerUp(const Vector3D &position, const std::string &filepath, entityid::EntityID type);
      ~PowerUp();

      void destroy();
      bool checkCollisions(const std::vector<Collider> &box);
  };
}