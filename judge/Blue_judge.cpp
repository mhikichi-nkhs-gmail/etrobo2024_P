#include "Judge.h"
#include "Blue_judge.h"

bool Blue_judge::judge()
{
    double blue1 = mHue->getValue();
    double blue2 = mSatu->getValue();

    if((blue1 > sblue1) && (blue2 > sblue2))
    {
        printf("あああ");
        return true;
    }
    else
    {
        printf("いいい");
        return false;
    }
}

void Blue_judge::setBlueH(double setblue1)
{
    sblue1 = setblue1;
    printf("ううう");
}

void Blue_judge::setBlueS(double setblue2)
{
    sblue2 =setblue2;
    printf("えええ");
}