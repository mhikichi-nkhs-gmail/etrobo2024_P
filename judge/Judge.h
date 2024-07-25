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
        void set(double param[]);
        void reset();
    protected:
        bool  calc_judge();
        Length *mLength;
    
};
#endif