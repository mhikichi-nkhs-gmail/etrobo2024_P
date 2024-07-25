#include "Len_judge.h"
#include "Judge.h"



boolean Len_judge::judge()
{
    double len = mLength->getValue();
    
   if(len > slen)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Len_judge::setLength(double setLen)
{
    slen = setLen;
}