#include "Brightness.h"

Brightness::Brightness()
    : Measure()
{

}

double Brightness::getValue()
{
    return mLpf->getFillteredValue();
}

void Brightness::update(float br)
{
    mLpf->addValue(br);
    mBrightness = br;
}