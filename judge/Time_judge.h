#ifndef TIME_JUDGE_H_
#define TIME_JUDGE_H_

#include "Judge.h"

class Time_judge : public Judge
{
    public:
        Time_judge();
        ~Time_judge();
        bool judge();
        void plustime();
        void setData(double stime[]);
        double time;
        double ftime;

    protected:   

    
};

#endif
