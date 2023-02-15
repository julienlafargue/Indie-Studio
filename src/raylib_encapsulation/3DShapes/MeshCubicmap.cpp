/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** MeshCubicmap
*/

#include "MeshCubicmap.hpp"

using namespace indie;

MeshCubicmap::MeshCubicmap(Images cubicmap, Vector3D cubeSize) : _cubicmap(cubicmap), _cubeSize(cubeSize)
{
  _mesh = GenMeshCubicmap(_cubicmap.getImage(), _cubeSize.getVector());
}

MeshCubicmap::~MeshCubicmap()
{
  UnloadMesh(_mesh);
}

Mesh MeshCubicmap::getMeshCubicmap()
{
  return (_mesh);
}