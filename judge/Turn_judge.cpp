#include "Turn_judge.h"
#include "Judge.h"



bool Turn_judge::judge()
{
    turn = mTurnAngle->getValue();
   
   if(turn > sturn)
    {
        //printf("ffffffffffffff%f \n",len,"hhhhhhhhhhhhhhh%f \n",slen);
        return true;
    }
    else
    {
        return false;
    }
}

void Turn_judge::setTurnAngle(double setturn)
{
    sturn = setturn;
}

void Turn_judge::setData(double JudgeArray[])
{
    Turn_judge::setTurnAngle(JudgeArray[0]);
}