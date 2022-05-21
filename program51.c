#include <stdio.h>
#include <stdbool.h>

bool ChkPalendrom(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;
    
    while(iNo > 0)
    {
        iDigit = iNo%10;
        iRev = iRev*10 + iDigit;
        iNo = iNo/10;
    }

    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkPalendrom(iValue);

    if(bRet==true)
    {
        printf("Number is palendrom\n");
    }
    else
    {
         printf("Number is not palendrom\n");
    }

    return 0;
}