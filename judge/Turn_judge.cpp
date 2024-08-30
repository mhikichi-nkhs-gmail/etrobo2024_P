#include "Turn_judge.h"
#include "Judge.h"
#include "cmath"



bool Turn_judge::judge()
{
    turn = mTurnAngle->getValue();
   
   if(turn > sturn)
    {
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