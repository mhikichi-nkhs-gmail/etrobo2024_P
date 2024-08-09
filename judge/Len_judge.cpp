#include "Len_judge.h"
#include "Judge.h"

bool Len_judge::judge()
{
    //printf("Len_judge");
    double len = mLength->getValue();
    printf("Len%f\n",len);
   if(slen>=0)
    {
       if(len > slen)
       {
        printf("ffffffffffffff%f \n",len,"hhhhhhhhhhhhhhh%f \n",slen);
           return true;
       }
       else
       {
            printf("no\n");
           return false;
       }
    }
    else
    {
        if(len < slen)
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
    //printf("slen%f \n",slen);
}

void Len_judge::setData(double JudgeArray[])
{
    Len_judge::setLength(JudgeArray[0]);
    //printf("length%f\n",JudgeArray[0]);
}