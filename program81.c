#include <stdio.h>

void Display(int iRow, int iCol)
{
  int iCnt1 = 0;
  int iCnt2 = 0;

  for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
  {

        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("*\t");
        }
        printf("\n");
  }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Please enter no of rows :\n");
    scanf("%d",&iValue1);

    printf("Please enter no of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);


    return 0;
}