/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** HowToPlayBox
*/

#include "HowToPlayBox.hpp"


indie::HowToPlayBox::HowToPlayBox(Vector2D position, gamemode::GameMode gamemode) :
  _howToPlayBoxTexture("assets/scenes/reallyBigBox.png", 1),
  _howToPlayTitle("HOW TO PLAY:", Vector2D(0, 0), 75, BLACK),
  _howToPlayText("Default text", Vector2D(0, 0), 30, BLACK),
  _howToPlayGamemodeTitle("MODE INFORMATION:", Vector2D(0, 0), 75, BLACK),
  _howToPlayGamemodeText("Default text for gamemode", Vector2D(0,0), 30, BLACK),
  _position(position),
  _gamemode(gamemode)
{
  _howToPlayString.clear();
  _howToPlayString = std::string(
"Every player can at the start put one \n\
bomb at the time, and put more with bonuses.\n\
The objective is to be the only player left !\n");

  _howToPlayText.setText(_howToPlayString);
  _howToPlayTitle.setPosition(Vector2D(_position.get_x() + 30, _position.get_y() + 20));
  _howToPlayText.setPosition(Vector2D(_position.get_x() + 30, _position.get_y() + 150));
  _howToPlayGamemodeTitle.setPosition(Vector2D(_howToPlayText.getPosition().get_x(), _howToPlayText.getPosition().get_y() + 180));
  _howToPlayGamemodeText.setPosition(Vector2D(_howToPlayGamemodeTitle.getPosition().get_x(), _howToPlayGamemodeTitle.getPosition().get_y() + 110));

}

indie::HowToPlayBox::~HowToPlayBox()
{
}

//getters
indie::gamemode::GameMode indie::HowToPlayBox::getGamemode() const
{
  return _gamemode;
}


//setters
void indie::HowToPlayBox::setGamemode(gamemode::GameMode gamemode)
{
  _gamemode = gamemode;
}


//member function

void indie::HowToPlayBox::draw()
{
  if (_gamemode == gamemode::GameMode::NORMAL)
    _howToPlayGamemodeText.setText(std::string("You are in normal mode !! A map is generated with random\npositioned crates, have fun by destroying your friends !!"));
  else
    _howToPlayGamemodeText.setText(std::string("You are in sudden death !! A map with no crates\nand with the most powerful bombs and a increased speed !!"));
  _howToPlayBoxTexture.drawTexture(_position);
  _howToPlayGamemodeTitle.draw();
  _howToPlayGamemodeText.draw();
  _howToPlayTitle.draw();
  _howToPlayText.draw();
}