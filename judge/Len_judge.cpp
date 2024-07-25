#include "Len_judge.h"
#include "Judge.h"



bool Len_judge::judge()
{
    double len = mLength->getValue();
    printf("ccccccccccccccc%f \n",len,"eeeeeeeeeeeee%f \n",slen);
   if(len > slen)
    {
        printf("ffffffffffffff%f \n",len,"hhhhhhhhhhhhhhh%f \n",slen);
        return true;
    }
    else
    {
        printf("aaaaaaaaaaaa%f \n",len,"bbbbbbbbbbbb%f \n",slen);
        return false;
    }
}

void Len_judge::setLength(double setLen)
{
    slen = setLen;
    printf("slen%f \n",slen);
}