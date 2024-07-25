#ifndef LEN_JUDGE_H_
#define LEN_JUDGE_H_

#include "Odometry.h"
#include "Length.h"
#include "Judge.h"


class Len_judge : public Judge
{
    public:
        bool judge();
        void setLength(int setLen);
        double setLen;
        double slen;

    protected:   

        double Length;
        bool direction;
};

#endif
