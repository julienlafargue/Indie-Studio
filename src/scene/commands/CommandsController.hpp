/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Commands
*/

#pragma once
#include "../IScene.hpp"
#include "../../entity/Button.hpp"
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../raylib_encapsulation/Draw.hpp"


namespace indie {
  class CommandsController : public IScene {
    public:
      CommandsController();
      ~CommandsController();

      //interface function
      void sceneLoop(GameParameters &gameParameters, CoreParameters &);
      void changeCoreParameters(CoreParameters &);
      void changeGameParameters(GameParameters &);
      void draw();

    private:
      Button _buttonBack;
			Mouse _mouse;
      TwoDTexture _background;
  };
}

