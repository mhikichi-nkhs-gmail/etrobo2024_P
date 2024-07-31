#ifndef JUDGE_H_
#define JUDGE_H_

#include "Length.h"

#include "ev3api.h"

extern Length *gLength;


class Judge
{
    public:
        Judge();
        virtual bool judge();
        virtual void set(double param[]);
        virtual void reset();
    protected:
        bool  calc_judge();
        Length *mLength;
    
};
#endif