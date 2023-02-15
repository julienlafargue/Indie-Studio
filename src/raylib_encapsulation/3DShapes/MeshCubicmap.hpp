/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** MeshCubicmap
*/

#ifndef MESHCUBICMAP_HPP_
#define MESHCUBICMAP_HPP_

#include "../raylib.hpp"
#include "../Vector3D.hpp"
#include "../Images.hpp"

namespace indie
{
  class MeshCubicmap {
    public:
      /**
       * @brief Constructs a new Mesh Cubicmap object
       * 
       * @param cubicmap Image of the cubicmap
       * @param cubeSize Size of the cubes
       */
      MeshCubicmap(Images cubicmap, Vector3D cubeSize);
      /**
       * @brief Destroys the Mesh Cubicmap object
       */
      ~MeshCubicmap();
      /**
       * @brief Generates a Cubicmap Mesh
       * 
       * @return Mesh 
       */
      Mesh getMeshCubicmap();

    private:
      Images _cubicmap;
      Vector3D _cubeSize;
      Mesh _mesh;
  };
}

#endif /* !MESHCUBICMAP_HPP_ */
