/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Map
*/

#pragma once

#include <vector>

#include "../enum/gameEnum.hpp"
#include "../raylib_encapsulation/Images.hpp"
#include "../raylib_encapsulation/3DShapes/MeshCubicmap.hpp"
#include "../raylib_encapsulation/3DShapes/Model3D.hpp"
#include "../raylib_encapsulation/3DShapes/Collider.hpp"
#include "../raylib_encapsulation/Vector3D.hpp"
#include "../raylib_encapsulation/TwoDTexture.hpp"
#include "map_generation/MapGeneration.hpp"
#include "../entity/boxes/Crate.hpp"
#include "../entity/boxes/PowerUp.hpp"

namespace indie
{
  class Map {
    public:
      Map();
      ~Map();

      void generate(gamemode::GameMode mode);
      void generate(gamemode::GameMode mode, unsigned int seed);

      void clearMap();

      void generateMap();
      void generateBoost();

      void draw();

      void cleanMap();

      void destroyCrate();

      Model3D getModel() const;
      MeshCubicmap getMeshCubic() const;
      std::vector<Crate> &getCrateTab();
      std::vector<Box> &getMapTab();
      std::vector<PowerUp> &getBoost();
      std::vector<Collider> getColliders() const;

      bool checkBoostCollision(const std::vector<Player> &players);

    private:
      MapGeneration _generation;
      Images _image;
      std::vector<Model3D> _entityList;
      MeshCubicmap _mesh;
      Model3D _model;
      TwoDTexture _texture;
      std::vector<Crate> _crates;
      std::vector<Box> _map;
      std::vector<Box> _floor;
      std::vector<PowerUp> _boost;
  };
}
