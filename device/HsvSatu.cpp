#include "HsvSatu.h"

HsvSatu::HsvSatu()
    : Measure()
{

}

double HsvSatu::getValue()
{
    return mLpf->getFillteredValue();
}

void HsvSatu::update(float s)
{
    mLpf->addValue(s);
    mSatu = s;
}