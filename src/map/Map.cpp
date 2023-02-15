/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Map
*/

#include "../raylib_encapsulation/Collisions.hpp"

#include "Map.hpp"

using namespace indie;

Map::Map() : _generation(), _image("assets/scenes/Game/map-templates/basic-template.png"), _mesh(_image, Vector3D(1, 1, 1)), _model(_mesh.getMeshCubicmap(), Vector3D(0, 0, 0), 1, WHITE, entityid::MAP), _texture("assets/scenes/Commands/CommandsBackground.png", 1)
{
  _model.applyTexture(_texture);
}

Map::~Map()
{
}

void Map::generate(gamemode::GameMode mode)
{
  _generation.generateMap(mode);
  _generation.generate();
  generateMap();
}

void Map::generate(gamemode::GameMode mode, unsigned int seed)
{
  _generation.generateMap(mode, seed);
  _generation.generate();
  generateMap();
}

void Map::clearMap()
{
  _boost.clear();
  _crates.clear();
  _map.clear();
  _generation.clearMap();
}

void Map::generateMap()
{
  int x = 0;
  int z = 0;

  for (auto iteratorZ : _generation.getMap())
  {
    x = 0;
    for (auto iteratorX : iteratorZ)
    {
      if (iteratorX)
        _floor.push_back(Box(Vector3D(x, -1.0, z), "assets/models/Map/Cube_Dirt_Single.gltf", entityid::WALL));
      if (iteratorX == 'O')
        _crates.push_back(Crate(Vector3D(x, 1.0, z)));
      if (iteratorX == 'X')
        _map.push_back(Box(Vector3D(x, 1.0, z), "assets/models/Map/Cube_Grass_Single.gltf", entityid::WALL));
      x += 2;
    }
    z += 2;
  }
}

void Map::generateBoost()
{
  std::vector<Vector3D> positions;
  std::vector<std::string> files({"assets/scenes/Game/Cube_Bricks.gltf", "assets/scenes/Game/Cube_Crate.gltf", "assets/models/Map/Cube_Dirt_Single.gltf", "assets/models/Map/Cube_Grass_Single.gltf"});
  Vector3D position(0, 0, 0);
  int nbBoost = 0;
  int entity;

  for (auto crate : _crates)
    positions.push_back(crate.getPosition());

  nbBoost = positions.size() / 3;

  while (nbBoost > 0) {
    position = _crates[std::rand() % _crates.size()].getPosition();
    for (auto boost : _boost)
      if (position == boost.getPosition())
        continue;
    entity = std::rand() % 3;
    _boost.push_back(PowerUp(position, files[entity], static_cast<entityid::EntityID>(entityid::BLOW + entity)));
    nbBoost--;
  }
}

void indie::Map::cleanMap()
{
  for (size_t i = 0; i != _crates.size(); i++) {
    if (_crates[i].getStatus() == false) {
      _crates.erase(_crates.begin() + i);
    }
  }
  for (auto iterator : _boost)
  {
    iterator.draw();
    // DrawBoundingBox(iterator.getModel().getBoundingBox(), BLACK);
  }
}

void Map::draw()
{
  cleanMap();
  for (auto iterator : _crates) {
    if (iterator.getStatus() == true) {
      iterator.draw();
    }
  }
  for (auto iterator : _map) {
    iterator.draw();
  }
  for (auto iterator : _floor) {
    iterator.draw();
  }
}

void Map::destroyCrate()
{
  for (auto iterator = _crates.begin(); iterator < _crates.end(); iterator++) {
    if (iterator->getStatus() == false) {
      _crates.erase(iterator);
      return;
    }
  }
}

Model3D indie::Map::getModel() const
{
  return (_model);
}

MeshCubicmap indie::Map::getMeshCubic() const
{
  return (_mesh);
}

std::vector<Crate> &indie::Map::getCrateTab()
{
  return (_crates);
}

std::vector<Box> &indie::Map::getMapTab()
{
  return (_map);
}

std::vector<PowerUp> &indie::Map::getBoost()
{
  return (_boost);
}

std::vector<Collider> indie::Map::getColliders() const
{
  std::vector<Collider> colls;

  for (auto map : _map)
    colls.push_back(map.getCollider());
  for (auto crate : _crates)
    colls.push_back(crate.getCollider());
  for (auto boost : _boost)
    colls.push_back(boost.getCollider());
  return (colls);
}


bool Map::checkBoostCollision(const std::vector<Player> &players)
{
  std::vector<Collider> coll;
  auto boost = _boost.begin();

  for (size_t i = 0; i < players.size(); i++)
    coll.push_back(players[i].getCollider());
  while (boost < _boost.end()) {
    if (boost->checkCollisions(coll))
      _boost.erase(boost);
    else
      boost++;
  }
  return (false);
}
