#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Search(int Arr[],int iLength,int iOcur)
{
    int iCnt = 0;
    int iCnt2 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {

        if((iOcur == Arr[iCnt])||(iOcur == Arr[iCnt]))
        {
            break;
        }
    }

    if(iLength == iCnt)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter number you want to find :");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Search(ptr,iSize,iValue);

   if(bRet == true)
   {
    printf("%d is present\n",iValue);
   }
   else
   {
    printf("%d is not present\n",iValue);
   }
    free(ptr);

    return 0;
}