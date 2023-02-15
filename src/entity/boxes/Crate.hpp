/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Crate
*/

#pragma once

#include "Box.hpp"
#include <vector>

namespace indie
{
  class Crate : public Box {
    public:
      Crate(const Vector3D &position);
      ~Crate();

      void destroy();
      bool getStatus() const;
      void updateEntityList(std::vector<Model3D> new_list);
      void checkCollisions(const std::vector<Collider> &coll);
      std::vector<Model3D> _entityList;

    private:
      bool _status;
  };
}