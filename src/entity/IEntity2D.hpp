/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** IEntity2D
*/

#ifndef IENTITY2D_HPP_
#define IENTITY2D_HPP_
#include "../raylib_encapsulation/Vector2D.hpp"

namespace indie {
  class IEntity2D {
    public:
      virtual ~IEntity2D() = default;
      virtual void draw() = 0;
      virtual Vector2D getPosition() const = 0;
  };
}

#endif /* !IENTITY2D_HPP_ */
