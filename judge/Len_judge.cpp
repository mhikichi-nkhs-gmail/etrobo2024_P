#include "Len_judge.h"
#include "Judge.h"

bool Len_judge::judge()
{
    len = mLength->getValue();
    double ans = len-keep;
    //printf("ans%f\n",ans);
    //printf("slen%f\n",slen);
    
   if(slen>=0)
    {
       if(ans > slen)
       {
           return true;
       }
       else
       {
           return false;
       }
    }
    else
    {
        if(ans < slen)
       {
           return true;
       }
       else
       {
           return false;
       }
    }
    
}

void Len_judge::setLength(double setLen)
{
    slen = setLen;
}

void Len_judge::setData(double JudgeArray[])
{
    Len_judge::setLength(JudgeArray[0]);
}

void Len_judge::reset()
{
    keep = mLength->getValue();
    //printf("keep%f\n",keep);
}