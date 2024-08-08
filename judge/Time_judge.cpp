#include "Time_judge.h"
#include "Judge.h"

Time_judge::Time_judge()
{
    time = 0.0;
}

bool Time_judge::judge()
{
    //printf("time%f\n",time);

    if(time >= ftime)
    {
        printf("true!!!\n");
        return true;
    }
    else
    {
        return false;
        printf("plus\n");
        plustime();
    }
}

void Time_judge::setData(double stime[])
{
    printf("stime%d\n",stime);
    ftime = stime[0];
}

void Time_judge::plustime()
{
    time = time + 1.0;
}