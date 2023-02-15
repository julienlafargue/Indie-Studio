/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** bomb
*/

#ifndef BOMB_HPP_
#define BOMB_HPP_

#include "../../raylib_encapsulation/raylib.hpp"
#include "../../raylib_encapsulation/3DShapes/Model3D.hpp"
#include "../../raylib_encapsulation/3DShapes/Collider.hpp"
#include "../../raylib_encapsulation/Vector3D.hpp"
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include <vector>
#include <cstdio>
#include "../../core/Timer.hpp"
#include "../IEntity3D.hpp"

namespace indie
{
  class Bomb : public IEntity3D {
    public:
      Bomb();
      ~Bomb();
      void explode(const std::vector<Collider> &newList);
      void initBlow(int radius);
      void setBlowPos(int radius);
      void placeBomb(const Vector3D &position);
      Vector3D getPosition() const;
      void setPosition(const Vector3D &vector);
      bool isPlaced();
      int getRadius() const;
      void updateRadius(bool val);
      void draw();
      std::vector<Model3D> getBlowTab();
      Model3D getModel() const;
      void drawBlow();

      Collider getCollider() const;
      entityid::EntityID getID() const;
      void setID(const entityid::EntityID id);

    private:
      bool _placed = false;
      int _radius = 3;
      clock_t _clock;
      Model3D _model;
      TwoDTexture _texture;
      Timer _timer;
      std::vector<Model3D> _blow;
      std::vector<bool> _blowSatus;
      entityid::EntityID _id;
      Vector3D _position;
  };
}

#endif /* !BOMB_HPP_ */
