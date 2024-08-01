#ifndef BLUE_JUDGE_H_
#define BLUE_JUDGE_H_

#include "Judge.h"
#include "HsvHue.h"
#include "HsvSatu.h"

class Blue_judge : public Judge
{
    public:
        bool judge();
        void setBlueH(double maxblue,double minblue);
        void setBlueS(double maxblue,double minblue);
        double sblueh1;
        double sblueh2;
        double sblues1;
        double sblues2;
        double maxblue;
        double minblue;
    protected:

        double Blue;
};  

#endif