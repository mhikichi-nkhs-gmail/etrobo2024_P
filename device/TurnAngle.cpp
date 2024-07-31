#include "TurnAngle.h"

TurnAngle::TurnAngle()
    : Measure(),
    mAngleDeg(true)
{
}

double TurnAngle::getValue()
{
    return mAngleDeg?mAngle*180/M_PI:mAngle;
}

void TurnAngle::update(float angle)
{
    mAngle = angle;
}