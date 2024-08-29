#ifndef TURN_JUDGE_H_
#define TURN_JUDGE_H_

#include "Odometry.h"
#include "Judge.h"

class Turn_judge : public Judge
{
    public:
        bool judge();
        void setTurnAngle(double setturn);
        void setData(double JudgeArray[]);
        double setTurnAngle;
        double sturn;
        double turn;

    protected:   

        double TurnAngle;
        bool direction;
};

#endif
