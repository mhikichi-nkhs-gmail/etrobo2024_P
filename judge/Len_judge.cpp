#include "Len_judge.h"
#include "Judge.h"

bool Len_judge::judge()
{
    //printf("Len_judge");
    len = mLength->getValue();
    double ans = len - keep;
    //printf("Len%f\n",len);
   if(slen>=0)
    {
       if(ans > slen)
       {
        //printf("ffffffffffffff%f \n",len,"hhhhhhhhhhhhhhh%f \n",slen);
           return true;
       }
       else
       {
           // printf("no\n");
           return false;
       }
    }
    else
    {
        if(ans < slen)
       {
        //printf("ffffffffffffff%f \n",len,"hhhhhhhhhhhhhhh%f \n",slen);
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
}