#include "Length.h"

Length::Length()
    : Measure()
{

}

float Length::getValue()
{
    return mLength;
}

void Length::update(float len)
{
    mLength = len;
}