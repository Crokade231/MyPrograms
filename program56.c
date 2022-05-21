#include <stdio.h>

int main()
{
    auto int Arr[5];
    register int iIdx = 0;

    printf("Enter elements : \n");

    for (iIdx = 0; iIdx < 5; iIdx++)
    {
        scanf("%d",&Arr[iIdx]);
    }

    printf("Elements of array are : \n");

    iIdx = 0;
    for (iIdx = 0; iIdx < 5; iIdx++)
    {
        printf("%d\n",Arr[iIdx]);
    }

    return 0;
}