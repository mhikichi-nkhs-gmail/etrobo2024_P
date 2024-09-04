#include "Turn_judge.h"
#include "Judge.h"



bool Turn_judge::judge()
{
    turn = mTurnAngle->getValue();
    double ans = turn-keep;
    printf("turn%f\n",turn);
   
   if(sturn>=0)
   {
    if(ans > sturn)
    {
        return true;
    }
    else
    {
        return false;
    }
   }else{
    if(ans < sturn)
    {
        return true;
    }
    else
    {
        return false;
    }
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

void Turn_judge::reset()
{
    keep = mTurnAngle->getValue();
}