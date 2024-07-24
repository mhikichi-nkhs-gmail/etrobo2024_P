#ifndef LEN_JUDGE_H_
#define LEN_JUDGE_H_

#include "Odometry.h"
#include "Judge.h"


class lenJudge : public Judge
{
    public:
        boolean judge();
        void set();

    protected:   

        double Length;
        boolean direction;
        Length *mlegth;
}