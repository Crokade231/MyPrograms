#include "Header53.h"

ULONG Power(int iNo1, int iNo2)
{
    ULONG lMult = 1;
    register int iCnt = 1;


    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }

     if(iNo2 < 0)
    {
        iNo2 = -iNo2;
    }

    
    while(iCnt <= iNo2)
    {
        lMult = lMult * iNo1;
        iCnt++;
    }

    return lMult;

}