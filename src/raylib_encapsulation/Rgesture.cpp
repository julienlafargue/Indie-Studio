/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Rgesture
*/

#include "Rgesture.hpp"

void SetsEnabled(unsigned int flags)
{
    SetGesturesEnabled(flags);
}

bool IsDetected(int gesture)
{
    return(IsGestureDetected(gesture));
}

int GetDetected(void)
{
    return(GetGestureDetected());
}

float GetHoldDuration(void)
{
    return(GetGestureHoldDuration());
}

indie::Vector2D GetDragVector(void)
{
    return(indie::Vector2D(GetGestureDragVector()));
}

float GetDragAngle(void)
{
    return(GetGestureDragAngle());
}

indie::Vector2D GetPinchVector(void)
{
    return(indie::Vector2D(GetGesturePinchVector()));
}

float GetPinchAngle(void)
{
    return(GetGesturePinchAngle());
}

