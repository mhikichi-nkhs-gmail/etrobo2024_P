#include "Time_judge.h"
#include "Judge.h"

Time_judge::Time_judge()
{
    time = 0.0;
}

bool Time_judge::judge()
{
    printf("time%f\n",time);

    if(time >= ftime)
    {
        return true;
    }
    else
    {
        return false;
        plustime();
    }
}

void Time_judge::setData(double stime)
{
    ftime = stime;
}

void Time_judge::plustime()
{
    time = time + 1.0;
}