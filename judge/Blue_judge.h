#ifndef BLUE_JUDGE_H_
#define BLUE_JUDGE_H_

#include "Judge.h"
#include "HsvHue.h"
#include "HsvSatu.h"

class Blue_judge : public Judge
{
    public:
        bool judge();
        void setData(double JudgeArray[]);
        void setBlueH(double minblue,double maxblue);
        void setBlueS(double minblue);
        double sblueh1;
        double sblueh2;
        double sblues1;
        double maxblue;
        double minblue;
    protected:
};  

#endif