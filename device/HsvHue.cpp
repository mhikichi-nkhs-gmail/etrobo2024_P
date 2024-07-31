#include "HsvHue.h"

HsvHue::HsvHue()
    : Measure()
{

}

double HsvHue::getValue()
{
    return mHue;
}

void HsvHue::update(float h)
{
    mHue = h;
}