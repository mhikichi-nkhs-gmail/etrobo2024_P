#include "Len_judge.h"
#include "Judge.h"

bool Len_judge::judge()
{
    len = mLength->getValue();
   if(slen>=0)
    {
       if(len - keep > slen)
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
        if(len - keep < slen)
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
    keep = slen;
}