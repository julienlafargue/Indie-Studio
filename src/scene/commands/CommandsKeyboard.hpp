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
#include "FoxBoxKeyboard.hpp"

namespace indie {
  class CommandsKeyboard : public IScene {
    public:
      CommandsKeyboard();
      ~CommandsKeyboard();

      //interface function
      void sceneLoop(GameParameters &gameParameters, CoreParameters &);
      void changeCoreParameters(CoreParameters &);
      void changeGameParameters(GameParameters &);
      void draw();

    private:
      Button _buttonBack;
			Mouse _mouse;
      TwoDTexture _background;
      FoxBoxKeyboard _orangeFoxBox;
      FoxBoxKeyboard _redFoxBox;
      FoxBoxKeyboard _greenFoxBox;
      FoxBoxKeyboard _blueFoxBox;

  };
}

