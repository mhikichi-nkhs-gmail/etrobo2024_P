#include "Turn_judge.h"
#include "Judge.h"



bool Turn_judge::judge()
{
    double tur = mTurnAngle->getValue();
   
   if(tur > sturn)
    {
        //printf("ffffffffffffff%f \n",len,"hhhhhhhhhhhhhhh%f \n",slen);
        return true;
    }
    else
    {
        return false;
    }
}

void Turn_judge::setTurnAngle(double turn)
{
    sturn = setturn;
    //printf("slen%f \n",slen);
}

void Turn_judge::setData(double JudgeArray[])
{
    Turn_judge::setTurnAngle(JudgeArray[0]);
}