
#include "Y_Position.h"

Y_Position::Y_Position()
    : Measure()
{

}

double Y_Position::getValue()
{
   return mY;
}

void Y_Position::update(double y)
{
    mY = y;
}