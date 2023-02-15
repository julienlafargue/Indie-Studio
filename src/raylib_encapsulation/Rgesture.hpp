/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Rgesture
*/

#ifndef RGESTURE_HPP_
#define RGESTURE_HPP_

#include "raylib.hpp"
#include "Vector2D.hpp"

namespace Rgesture
{
    void SetsEnabled(unsigned int flags);
    bool IsDetected(int gesture);
    int GetDetected(void);
    float GetHoldDuration(void);
    indie::Vector2D GetDragVector(void);
    float GetDragAngle(void);
    indie::Vector2D GetPinchVector(void);
    float GetPinchAngle(void);
}
#endif
