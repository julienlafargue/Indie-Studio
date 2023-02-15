/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Game_scene
*/

#ifndef Game_SCENE_HPP_
#define Game_SCENE_HPP_

#include <memory>
#include "../IScene.hpp"
#include "../../enum/sceneEnum.hpp"
#include "../../entity/Button.hpp"
#include "../../map/Map.hpp"
#include <vector>
#include "../../raylib_encapsulation/raylib.hpp"
#include "../../entity/player/Player.hpp"
#include "../../raylib_encapsulation/Rcamera.hpp"
#include "../../raylib_encapsulation/TwoDTexture.hpp"
#include "../../map/Map.hpp"
#include "Hud.hpp"
#include "Pause.hpp"
#include "WinMenu.hpp"

namespace indie
{
  class Game : public IScene
  {
  public:
    Game(float duration, int kills);
    ~Game();
    void sceneLoop(GameParameters &gameParameters, CoreParameters &coreParameters);
    int handleEvent();
    void drawPlayers();
    void checkCollisions(GameParameters &gameParameters, CoreParameters &coreParameters);
    void updateEntityList();
    SCENE_ID changeScene();
    void changeCoreParameters(CoreParameters &coreParameters);
    void changeGameParameters(GameParameters &);
    void launchNormalMode(GameParameters &gameParameters);
    void launchSuddenDeathMode(GameParameters &gameParameters); 
    void draw();
    void setIdWinner(int id);
    int getIdWinner() const;

  private:
    Hud _hud;
    Mouse _mouse;
    Rcamera _camera;
    std::vector<Player> _playerTab;
    std::vector<Collider>_entityList;
    std::chrono::time_point<std::chrono::steady_clock> _timeStart;
    std::chrono::time_point<std::chrono::steady_clock> _timeNow;
    float _duration;
    int _kills;
    int _nbPlayer = 0;
    int _idWinner = 0;
    gamestatus::GameStatus _status;
    Map _map;
    Pause _pause;
    WinMenu _winMenu;
    TwoDTexture _background;
  };
}
#endif /* !Game_SCENE_HPP_ */
