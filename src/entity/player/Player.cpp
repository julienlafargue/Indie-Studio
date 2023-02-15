/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** player
*/
#include "Player.hpp"
#include "../raylib_encapsulation/Input.hpp"

using namespace indie;

Vector3D Player::setPositionbyId(int id)
{
  if (id == 1)
    _posPlayer = {2, 0.1, 2};
  if (id == 2)
    _posPlayer = {26, 0.1, 2};
  if (id == 3)
    _posPlayer = {2, 0.1, 26};
  if (id == 4)
    _posPlayer = {26, 0.1, 26};
  return (_posPlayer);
}

Color Player::setColorbyId(int id)
{
  if (id == 1)
    _colorPlayer = YELLOW;
  if (id == 2)
    _colorPlayer = RED;
  if (id == 3)
    _colorPlayer = BLUE;
  if (id == 4)
    _colorPlayer = GREEN;
  return (_colorPlayer);
}
ControlScheme Player::setControlPlayer(int id)
{
  if (id == 1)
    _controlsplayer = ControlScheme(KEY_W, KEY_S, KEY_A, KEY_D, KEY_E);
  if (id == 2)
    _controlsplayer = ControlScheme(KEY_O, KEY_L, KEY_K, KEY_SEMICOLON, KEY_P);
  if (id == 3)
    _controlsplayer = ControlScheme(KEY_KP_8, KEY_KP_5, KEY_KP_4, KEY_KP_6, KEY_KP_9);
  if (id == 4)
    _controlsplayer = ControlScheme(KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT, KEY_RIGHT_CONTROL);
  return (_controlsplayer);
}

Player::Player(int playerId, int nbomb)
    : _controls(setControlPlayer(playerId)),
      _model("assets/models/fox/fox_swordless.glb", setPositionbyId(playerId), (Vector3){0, 0, 0}, 1, setColorbyId(playerId), entityid::PLAYER),
      _texture("assets/models/fox/Textures/fox_diffuse.png", 0),
      _gamepad(playerId - 1)
{
  _angle = 0;
  _playerId = playerId;
  for (int i = 0; i < nbomb; i++)
    _bombTab.push_back(Bomb());
}

Player::~Player()
{
}

void Player::setPosition(const Vector3D &vector)
{
  _model.setPosition(vector.getVector());
}

Vector3D Player::getPosition() const
{
  return (_model.getPosition());
}

void Player::draw()
{
  if (_alive == true)
    _model.drawModelEx(Vector3D(0, 0.5, 0), _angle);
  drawBomb();
}

bool Player::isAlive()
{
  return this->_alive;
}

void Player::drawBomb()
{
  for (size_t i = 0; i < _bombTab.size(); i++)
    if (_bombTab[i].isPlaced() == true)
      _bombTab[i].draw();
}

void Player::updateBomb(const std::vector<Collider> &newList)
{
  for (size_t i = 0; i < _bombTab.size(); i++)
    if (_bombTab[i].isPlaced() == true)
      _bombTab[i].explode(newList);
}

void Player::placeBomb()
{
  for (size_t i = 0; i < _bombTab.size(); i++) {
    if (_bombTab[i].isPlaced() == false) {
      _bombTab[i].placeBomb(_model.getPosition());
      break;
    }
  }
}

void Player::moveX(float angle, int direction)
{
  Vector3D vector = _model.getPosition();

  vector.set_x(vector.get_x() + (0.2f * _speedMult * direction));
  _angle = angle;
  _model.setPosition(vector);
  _model.incrementBoxPositionX(0.2f * _speedMult * direction);
}

void Player::moveZ(float angle, int direction)
{
  Vector3D vector = _model.getPosition();

  vector.set_z(vector.get_z() + (0.2f * _speedMult * direction));
  _angle = angle;
  _model.setPosition(vector);
  _model.incrementBoxPositionZ(0.2f * _speedMult * direction);
}

bool Player::checkCollision(entityid::EntityID type)
{
  if (type == entityid::WALL || (type == entityid::CRATE))
    return (true);
  if (type == entityid::BLOW)
    _alive = false;
  return (false);
}

void Player::movePlayer(const CommandMode control, const std::vector<Collider> &newList)
{
  Collider col;
  if ((control == KEYBOARD && Input::isKeyDown(_controls.getControlLeft())) || (control == CONTROLLER && (_gamepad.checkX(-1) ||
  _gamepad.isButtonDown(GAMEPAD_BUTTON_LEFT_FACE_LEFT)))) {
    _model.incrementBoxPositionX(-0.2);
    col.set(_model.getBoundingBox(), entityid::PLAYER);
    if (checkCollision(Collisions::checkCollisions(newList, col)) == false) {
      moveX(270, -1);
    }
    _model.incrementBoxPositionX(0.2);
  }

  if ((control == KEYBOARD && Input::isKeyDown(_controls.getControlRight())) || (control == CONTROLLER && (_gamepad.checkX(1) ||
  _gamepad.isButtonDown(GAMEPAD_BUTTON_LEFT_FACE_RIGHT)))) {
    _model.incrementBoxPositionX(0.2);
    col.set(_model.getBoundingBox(), entityid::PLAYER);
    if (checkCollision(Collisions::checkCollisions(newList, col)) == false) {
      moveX(90, 1);
    }
    _model.incrementBoxPositionX(-0.2);
  }

  if ((control == KEYBOARD && Input::isKeyDown(_controls.getControlUp())) || (control == CONTROLLER && (_gamepad.checkY(-1) ||
  _gamepad.isButtonDown(GAMEPAD_BUTTON_LEFT_FACE_UP)))) {
    _model.incrementBoxPositionZ(-0.2);
    col.set(_model.getBoundingBox(), entityid::PLAYER);
    if (checkCollision(Collisions::checkCollisions(newList, col)) == false) {
      moveZ(180, -1);
    }
    _model.incrementBoxPositionZ(0.2);
  }

  if ((control == KEYBOARD && Input::isKeyDown(_controls.getControlDown())) || (control == CONTROLLER && (_gamepad.checkY(1) ||
  _gamepad.isButtonDown(GAMEPAD_BUTTON_LEFT_FACE_DOWN)))) {
    _model.incrementBoxPositionZ(0.2);
    col.set(_model.getBoundingBox(), entityid::PLAYER);
    if (checkCollision(Collisions::checkCollisions(newList, col)) == false) {
      moveZ(0, 1);
    }
    _model.incrementBoxPositionZ(-0.2);
  }

  if ((control == KEYBOARD && Input::isKeyReleased(_controls.getControlAction())) || (control == CONTROLLER &&
  _gamepad.isButtonPressed(GAMEPAD_BUTTON_RIGHT_FACE_DOWN))) {
    placeBomb();
  }
}

void Player::bonusSpeed(bool val)
{
  if (val == true)
    _speedMult += 0.1;
  else if (val == false)
    _speedMult -= 0.1;
}

void Player::bonusNbomb(bool val)
{
  if (val == true)
    _bombTab.push_back(Bomb());
  else if (val == false && _bombTab.size() > 1)
    _bombTab.pop_back();
}

void Player::bonusBombRadius(bool val)
{
  for (size_t i = 0; i < _bombTab.size(); i++)
    _bombTab[i].updateRadius(val);
}

void Player::updateScore(int points)
{
  _score += points;
}

std::vector<Bomb> &Player::getBombTab()
{
  return _bombTab;
}

Model3D Player::getModel() const
{
  return _model;
}

Collider Player::getCollider() const
{
  return (Collider(_model.getBoundingBox(), entityid::PLAYER));
}

bool Player::checkButtonPressed(int button)
{
  return (_gamepad.isButtonPressed(button));
}

float Player::getSpeedMult() const
{
  return _speedMult;
}

void Player::setSpeedMult(float speed)
{
  _speedMult = speed;
}

entityid::EntityID Player::getID() const
{
  return (_id);
}

void Player::setID(const entityid::EntityID id)
{
  _id = id;
}

std::vector<Collider> Player::getColliders() const
{
  std::vector<Collider> colls;

  colls.push_back(getCollider());
  for (auto bomb : _bombTab)
    colls.push_back(bomb.getCollider());
  return (colls);
}

int Player::getPlayerId() const
{
  return _playerId;
}
