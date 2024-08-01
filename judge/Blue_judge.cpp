#include "Judge.h"
#include "Blue_judge.h"

bool Blue_judge::judge()
{
    double blue1 = mHue->getValue();
    double blue2 = mSatu->getValue();

    if(((blue1 >= sblueh1) && (blue1 <= sblueh2)) && ((blue2 >= sblues1) && (blue2 <= sblues2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Blue_judge::setBlueH(double maxblue,double minblue)
{
    sblueh1 = maxblue;
    sblueh2 = minblue;
    //printf("ううう");
}

void Blue_judge::setBlueS(double maxblue,double minblue)
{
    sblues1 = maxblue;
    sblues2 = minblue;
    //printf("えええ");
}