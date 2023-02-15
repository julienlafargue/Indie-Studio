/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Camera
*/

#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "raylib.hpp"
#include "Vector3D.hpp"

namespace indie
{
  class Rcamera {
    public:
      Rcamera(Vector3D position, Vector3D target, Vector3D up, float fovy, int projection);
      ~Rcamera();

      Camera3D getCamera();
      Vector3D getPosition();
      Vector3D getTarget();
      Vector3D getUp();

      void setMode(int mode);
      void setPosition(Vector3D postion);
      void setTarget(Vector3D target);
      void setUp(Vector3D up);

      void update();

      void setPanControl(int keyPan);
      void setAltControl(int keyAlt);

      void setSmoothZoomControl(int keySmoothZoom);
      void setMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown);

    protected:
    private:
      Camera3D _camera; // faire un vector de camera
  };
} // namespace indie

#endif

