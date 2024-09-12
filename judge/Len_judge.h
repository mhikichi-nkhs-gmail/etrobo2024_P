#ifndef LEN_JUDGE_H_
#define LEN_JUDGE_H_

#include "Odometry.h"
#include "Length.h"
#include "Judge.h"


class Len_judge : public Judge
{
    public:
        bool judge();
        void setLength(double setLen);
        void setData(double JudgeArray[]);
        void reset();
        double setLen;
        double slen;
        double keep;
        double len;

    protected:   

        double Length;
        bool direction;
};

#endif
