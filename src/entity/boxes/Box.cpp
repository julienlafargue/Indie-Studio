/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Box
*/

#include "Box.hpp"
#include "../../raylib_encapsulation/Vector3D.hpp"
#include "../../raylib_encapsulation/3DShapes/Model3D.hpp"

using namespace indie;

Box::Box(const Vector3D &position, const std::string &filepath, const entityid::EntityID id) : _position(position), _model(filepath, _position, 1.0, WHITE, id)
{
  Vector3D tmp_min = _model.getBoundingBox().min;
  Vector3D tmp_max = _model.getBoundingBox().max;
  Vector3D diff = (tmp_max - tmp_min);
  Vector3D last(diff.get_x() / 4, diff.get_y() / 4, diff.get_z() / 4);
  _model.setBoxSize(Vector3D(_model.getBoundingBox().min), Vector3D(_model.getBoundingBox().max) - last);
  Vector3D tmp = Vector3D(_model.getBoundingBox().max.x, getPosition().get_y(), _model.getBoundingBox().max.z) - Vector3D(_model.getBoundingBox().min.x,_model.getPosition().get_y(), _model.getBoundingBox().min.z);
  _model.setBoxPosition(getPosition() - Vector3D(tmp.get_x() / 2, getPosition().get_y() / 2, tmp.get_z() / 2));
  _id = id;
}

Box::~Box()
{}

Vector3D Box::getPosition() const
{
  return (_position);
}

void Box::setPosition(const Vector3D &vector)
{
  _position = vector;
}

void Box::setID(const entityid::EntityID id)
{
  _id = id;
}

entityid::EntityID Box::getID() const
{
  return (_id);
}

void Box::draw()
{
  _model.drawModel();
}

Model3D Box::getModel()
{
  return (_model);
}

Collider Box::getCollider() const
{
  return (Collider(_model.getBoundingBox(), getID()));
}
