#ifndef TURN_JUDGE_H_
#define TURN_JUDGE_H_

#include "Odometry.h"
#include "Judge.h"
#include "cmath"

class Turn_judge : public Judge
{
    public:
        bool judge();
        void setTurnAngle(double setturn);
        void setData(double JudgeArray[]);
        double sturn;
        double turn;

    protected:   

        double TurnAngle;
        bool direction;
};

#endif
