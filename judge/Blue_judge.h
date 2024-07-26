#ifndef BLUE_JUDGE_H_
#define BLUE_JUDGE_H_

#include "Judge.h"
#include "Brightness.h"
#include "HsvHue.h"
#include "HsvSatu.h"

class blue_judge : public Judge
{
    public:
        bool judge();
};

#endif