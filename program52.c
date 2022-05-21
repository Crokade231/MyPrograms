#include <stdio.h>

typedef unsigned long int ULONG;

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

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto ULONG lRet = 0;
   

    printf("Enter base\n");
    scanf("%d",&iValue1);

    printf("Enter power\n");
    scanf("%d",&iValue2);

    lRet = Power(iValue1,iValue2);
    printf("Power is %ld\n",lRet);

    return 0;
}