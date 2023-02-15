/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Camera
*/

#include "Rcamera.hpp"

using namespace indie;

Rcamera::Rcamera(Vector3D position, Vector3D target, Vector3D up, float fovy, int projection)
{
  _camera.position = position.getVector();
  _camera.target = target.getVector();
  _camera.up = up.getVector();
  _camera.fovy = fovy;
  _camera.projection = projection;
}

indie::Rcamera::~Rcamera()
{
}

Camera3D Rcamera::getCamera()
{
  return (_camera);
}

Vector3D Rcamera::getPosition()
{
  return (indie::Vector3D(_camera.position));
}

Vector3D Rcamera::getTarget()
{
  return (indie::Vector3D(_camera.target));
}

Vector3D Rcamera::getUp()
{
  return (indie::Vector3D(_camera.up));
}

void Rcamera::setMode(int mode)
{
  SetCameraMode(_camera, mode);
}

void Rcamera::setPosition(Vector3D postion)
{
  _camera.position = postion.getVector();
}

void Rcamera::setTarget(Vector3D target)
{
  _camera.target = target.getVector();
}

void Rcamera::setUp(Vector3D up)
{
  _camera.up = up.getVector();
}

void Rcamera::update()
{
  UpdateCamera(&_camera);
}

void Rcamera::setPanControl(int keyPan)
{
  SetCameraPanControl(keyPan);
}

void Rcamera::setAltControl(int keyAlt)
{
  SetCameraAltControl(keyAlt);
}

void Rcamera::setSmoothZoomControl(int keySmoothZoom)
{
  SetCameraSmoothZoomControl(keySmoothZoom);
}

void Rcamera::setMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown)
{
  SetCameraMoveControls(keyFront, keyBack, keyRight, keyLeft, keyUp, keyDown);
}
