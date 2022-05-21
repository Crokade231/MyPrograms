#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int FirstOccurance(int Arr[],int iLength,int iOcur)
{
    int iCnt = 0;
    int iCnt2 = 0;

    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {

        if(iOcur == Arr[iCnt])
        {
            break;
        }
    }
        return iCnt;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = FirstOccurance(ptr,iSize,iValue);

   if(iRet == -1)
   {
    printf("There is no such element\n");
   }
   else
   {
    printf("Element is present at index %d\n",iRet);
   }
    free(ptr);

    return 0;
}