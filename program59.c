#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[],int iLength)
{

    printf("Elements of array are : \n");

    register int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    auto int iSize = 0;
    register int iCnt = 0;
    int *ptr = NULL;

    printf("Enter how many elements you want : \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize*sizeof(int));

    printf("Enter elements : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    Display(ptr,iSize);
    free(ptr);

    return 0;
}