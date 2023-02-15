/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Pause
*/

#include "Pause.hpp"

using namespace indie;

Pause::Pause() : _pauseBox("assets/scenes/BigEmptyHeightBox.png", 1),
	_resume(760,180, "assets/scenes/Game/pause/ButtonResume.png"),
	_settings(760, 380, "assets/scenes/Game/pause/ButtonSettings.png"),
	_saveAndQuit(760, 580, "assets/scenes/Game/pause/ButtonSave.png"),
	_quit(760, 780, "assets/scenes/Game/pause/ButtonExit.png")
{
}

void Pause::drawPauseMenu()
{
	_pauseBox.drawTexture(Vector2D(660, 115));
	_resume.draw();
	_settings.draw();
	_saveAndQuit.draw();
	_quit.draw();
}

gamestatus::GameStatus Pause::pauseGame(Mouse mouse)
{
	if (_resume.isButtonPressed(mouse))
		return gamestatus::RUNNING;
	if (_settings.isButtonPressed(mouse))
		return gamestatus::SETTINGS;
	if (_saveAndQuit.isButtonPressed(mouse))
		return gamestatus::PAUSED;
	if (_quit.isButtonPressed(mouse))
		return gamestatus::EXIT;
	return gamestatus::PAUSED;
}

Pause::~Pause()
{
}
