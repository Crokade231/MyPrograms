#include <stdio.h>

void Display(int iptr[])
{
    printf("Elements of array are : \n");

    register int iIdx = 0;
    for (iIdx = 0; iIdx < 5; iIdx++)
    {
        printf("%d\n",*(iptr+iIdx));
    }
}

int main()
{
    auto int Arr[5];
    register int iIdx = 0;

    printf("Enter elements : \n");

    for (iIdx = 0; iIdx < 5; iIdx++)
    {
        scanf("%d",&Arr[iIdx]);
    }


    Display(Arr);

    return 0;
}