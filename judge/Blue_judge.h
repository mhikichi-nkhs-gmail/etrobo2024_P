#ifndef BLUE_JUDGE_H_
#define BLUE_JUDGE_H_

#include "Judge.h"
#include "HsvHue.h"
#include "HsvSatu.h"

class Blue_judge : public Judge
{
    public:
        bool judge();
        void setBlueH(double setblue1);
        void setBlueS(double setblue2);
        double sblue1;
        double sblue2;
        double setblue1;
        double setblue2;
    protected:

        double Blue;
};  

#endif