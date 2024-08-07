#include "Judge.h"
#include "Blue_judge.h"

bool Blue_judge::judge()
{
    double blue1 = mHue->getValue();
    double blue2 = mSatu->getValue();

    if(((blue1 >= sblueh1) && (blue1 <= sblueh2)) && (blue2 >= sblues1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Blue_judge::setData(double JudgeArray[])
{
    setBlueH(JudgeArray[0],JudgeArray[1]);
    setBlueS(JudgeArray[2]);
}

void Blue_judge::setBlueH(double minblue,double maxblue)
{
    sblueh1 = minblue;
    sblueh2 = maxblue;
    //printf("ううう");
}

void Blue_judge::setBlueS(double minblue)
{
    sblues1 = minblue;
    //printf("えええ");
}