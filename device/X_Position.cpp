#include "X_Position.h"

X_Position::X_Position()
    : Measure()
{

}

double X_Position::getValue()
{
   return mX;
}

void X_Position::update(double x)
{
    mX = x;
}