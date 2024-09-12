#include "Len_judge.h"
#include "Judge.h"

bool Len_judge::judge()
{
<<<<<<< HEAD
    len = mLength->getValue();
    double ans = len-keep;
    //printf("ans%f\n",ans);
    //printf("slen%f\n",slen);
    
=======
    //printf("Len_judge");
    len = mLength->getValue();
    double ans = len - keep;
    //printf("Len%f\n",len);
>>>>>>> f_part
   if(slen>=0)
    {
       if(ans > slen)
       {
<<<<<<< HEAD
=======
        //printf("ffffffffffffff%f \n",len,"hhhhhhhhhhhhhhh%f \n",slen);
>>>>>>> f_part
           return true;
       }
       else
       {
<<<<<<< HEAD
=======
           // printf("no\n");
>>>>>>> f_part
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
<<<<<<< HEAD
    keep = mLength->getValue();
    //printf("keep%f\n",keep);
=======
    
    keep = mLength->getValue();
>>>>>>> f_part
}