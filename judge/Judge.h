#ifndef JUDGE_H_
#define JUDGE_H_

#include "Length.h"

extern Length *gLength;


class Judge
{
    public:
        Judge();
        bool judge();
        void set(double param[]);
        void reset();
    protected:
        bool  calc_judge();
        
    private:
        Length *mLength;
    
};
#endif