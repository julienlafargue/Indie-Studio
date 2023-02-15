/*
** EPITECH PROJECT, 2022
** INDIE
** File description:
** Model3D
*/

#include "Model3D.hpp"

using namespace indie;

BoundingBox getModelBoundingBox(Model model)
{
  return GetModelBoundingBox(model);
}

void indie::Model3D::setBoxPosition(Vector3D pos)
{
  Vector3D diff = Vector3D(_box.max) - Vector3D(_box.min);

  _box.min = pos.getVector();
  _box.max = Vector3D(Vector3D(_box.min) + diff).getVector();
}

Model3D::Model3D(std::string fileName, Vector3D position, float scale, Color tint, entityid::EntityID id) : _position(position)
{
  _model = loadModel(fileName);
  _scale = scale;
  _tint = tint;
  _box = getModelBoundingBox(_model);
  Vector3D tmp_min = getBoundingBox().min;
  Vector3D tmp_max = getBoundingBox().max;
  Vector3D diff = (tmp_max - tmp_min);
  _id = id;
}

Model3D::Model3D(std::string fileName, Vector3D position, Vector3D rotation, float scale, Color tint, entityid::EntityID id) : _position(position), _rotation(rotation)
{
  _model = loadModel(fileName);
  _scale = scale;
  _tint = tint;
  _box = getModelBoundingBox(_model);
  Vector3D tmp = Vector3D(getBoundingBox().max.x, getPosition().get_y(), getBoundingBox().max.z) - Vector3D(getBoundingBox().min.x, getPosition().get_y(), getBoundingBox().min.z);
  setBoxPosition(getPosition() - Vector3D(tmp.get_x() / 2, getPosition().get_y() / 2, tmp.get_z() / 2));
  _id = id;
}

Model3D::Model3D(Mesh mesh, Vector3D position, float scale, Color tint, entityid::EntityID id) : _position(position)
{
  _model = loadModelFromMesh(mesh);
  _scale = scale;
  _tint = tint;
  _box = getModelBoundingBox(_model);
  Vector3D tmp = Vector3D(getBoundingBox().max.x, getPosition().get_y(), getBoundingBox().max.z) - Vector3D(getBoundingBox().min.x, getPosition().get_y(), getBoundingBox().min.z);
  setBoxPosition(getPosition() - Vector3D(tmp.get_x() / 2, getPosition().get_y() / 2, tmp.get_z() / 2));
  _id = id;
  _typemodel = 1;
}

Model3D::~Model3D()
{
  if (_typemodel == 1)
    UnloadModelKeepMeshes(_model);
}

Model Model3D::loadModel(std::string fileName)
{
  return (LoadModel(fileName.c_str()));
}

Model Model3D::loadModelFromMesh(Mesh mesh)
{
  return (LoadModelFromMesh(mesh));
}

void Model3D::unloadModel()
{
  UnloadModel(this->_model);
}

void Model3D::drawModel()
{
  DrawModel(_model, _position.getVector(), _scale, _tint);
}

void Model3D::drawModelEx(Vector3D axis, float angle)
{
  DrawModelEx(_model, _position.getVector(), axis.getVector(), angle, Vector3D((1 * _scale), (1 * _scale), (1 * _scale)).getVector(), _tint);
}

void Model3D::drawBoundingBox(BoundingBox box, Color color)
{
  DrawBoundingBox(box, color);
}

// SETTERS

void Model3D::setModel(Model model)
{
  _model = model;
}

void Model3D::setModel(std::string fileName)
{
  _model = loadModel(fileName);
}

void Model3D::setModel(Mesh mesh)
{
  _model = loadModelFromMesh(mesh);
}

void Model3D::setPosition(Vector3D position)
{
  _position = position;
}

void Model3D::setRotation(Vector3D rotation)
{
  _rotation = rotation;
}

void Model3D::setScale(float scale)
{
  _scale = scale;
}

void Model3D::setTint(Color tint)
{
  _tint = tint;
}

// GETTERS

Model Model3D::getModel() const
{
  return (_model);
}

Vector3D Model3D::getPosition() const
{
  return (_position);
}

float Model3D::getScale() const
{
  return (_scale);
}

Color Model3D::getTint() const
{
  return (_tint);
}

BoundingBox Model3D::getBoundingBox() const
{
  return _box;
}

entityid::EntityID Model3D::getID() const
{
  return (_id);
}

void indie::Model3D::setBoxSize(Vector3D posMin, Vector3D posMax)
{
  _box.min = posMin.getVector();
  _box.max = posMax.getVector();
}

void indie::Model3D::incrementBoxPosition(Vector3D pos)
{
  _box.min.x += pos.get_x();
  _box.min.y += pos.get_y();
  _box.min.z += pos.get_z();
  _box.max.x += pos.get_x();
  _box.max.y += pos.get_y();
  _box.max.z += pos.get_z();
}

void indie::Model3D::incrementBoxPositionX(float x)
{
  _box.min.x += x;
  _box.max.x += x;
}

void indie::Model3D::incrementBoxPositionY(float y)
{
  _box.min.y += y;
  _box.max.y += y;
}

void indie::Model3D::incrementBoxPositionZ(float z)
{
  _box.min.z += z;
  _box.max.z += z;
}

void Model3D::applyTexture(TwoDTexture &texture)
{
  _model.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = texture.getTexture();
}

void Model3D::setType(entityid::EntityID id)
{
  _id = id;
}
