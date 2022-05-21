// Program to display 1 to 5 on screen
//	1	2	3	4	5
#include <stdio.h>


void Display(int iNo)        // Defination
{
	int iCnt = 0;
	iCnt = 1;
	
	while(iCnt <= iNo)
	{
		printf("%d\n",iCnt);
		iCnt++;
	}
}

int main()
{
	int iValue = 0;

	printf("enter numbers till u want to display\n");
	scanf("%d",&iValue);

	Display(iValue);


	return 0;
}

