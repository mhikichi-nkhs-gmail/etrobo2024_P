#include "Length.h"

Length::Length()
    : Measure()
{

}

double Length::getValue()
{
    return mLength;
}

void Length::update(float len)
{
    mLength = len;
}