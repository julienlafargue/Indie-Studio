/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** player
*/

#pragma once

#include "../../raylib_encapsulation/3DShapes/Model3D.hpp"
#include "../../raylib_encapsulation/3DShapes/Collider.hpp"
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../raylib_encapsulation/Collisions.hpp"
#include "../../raylib_encapsulation/Vector3D.hpp"
#include "../../enum/commandModeEnum.hpp"
#include "../../raylib_encapsulation/raylib.hpp"
#include "../../enum/gameEnum.hpp"
#include "../bombs/Bomb.hpp"
#include "../IEntity3D.hpp"
#include "Gamepad.hpp"
#include "Controls.hpp"
#include <vector>

namespace indie {
	class Player : public IEntity3D {
    public:
      Player(int playerId, int nbomb);
      ~Player();
      void placeBomb();
      void draw();
      void drawBomb();
      void updateBomb(const std::vector<Collider> &newList);

      bool checkCollision(entityid::EntityID type);

      void moveX(float angle, int direction);
      void moveZ(float angle, int direction);
      void movePlayer(const CommandMode control, const std::vector<Collider> &newList);
		  int getPlayerId() const;

      entityid::EntityID getID() const;
      void setID(const entityid::EntityID id);

      // bool checkCollisions(Model3D tmp);
      void bonusSpeed(bool val);
      void bonusNbomb(bool val);
      void bonusBombRadius(bool val);
      void updateScore(int points);
      bool isAlive();
      Vector3D setPositionbyId(int id);
      Color setColorbyId(int id);
      TwoDTexture setTexturebyId(int id);
      ControlScheme setControlPlayer(int id);
      void setPosition(const Vector3D &vector);
      Vector3D getPosition() const;
      float getSpeedMult() const;
      void setSpeedMult(float speed);
      std::vector<Bomb> &getBombTab();
      Model3D getModel() const;
      Collider getCollider() const;
      std::vector<Collider> getColliders() const;
      bool checkButtonPressed(int button);

    private:
      int _playerId;
      bool _alive = true;
      float _speedMult = 0.6;
      float _score = 0;
      float _angle;
      std::vector<Bomb> _bombTab;
      ControlScheme _controls;
      Model3D _model;
      TwoDTexture _texture;
      Vector3D _posPlayer;
      Color _colorPlayer;
      ControlScheme _controlsplayer;
      Gamepad _gamepad;
      entityid::EntityID _id;
	};
}
