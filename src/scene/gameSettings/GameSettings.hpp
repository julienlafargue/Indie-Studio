/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** GameSettings
*/

#pragma once
#include "../IScene.hpp"
#include "../settings/ScrollableValue.hpp"
#include "../../raylib_encapsulation/Mouse.hpp"
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../raylib_encapsulation/Draw.hpp"
#include "../../enum/gameEnum.hpp"
#include "HowToPlayBox.hpp"


namespace indie {
  class GameSettings : public IScene {
    public:
      GameSettings();
      ~GameSettings();
		  void sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters);
		  void changeCoreParameters(indie::CoreParameters &);
		  void changeGameParameters(indie::GameParameters &);
		  void draw();
    private:
      Button _enableTimerButton;
      ScrollableValue _scrollableTimer;
      ScrollableValue _scrollableNbIA;
      ScrollableValue _scrollableNbPlayer;
      Button _gameModeButton;
      Button _backButton;
      Button _startGameButton;
      TwoDTexture _parametersBox;
      TwoDTexture _background;
      HowToPlayBox _howToPlay;
      bool _canStart;
      bool _isTimerEnabled;
      Mouse _mouse;
  };
}
