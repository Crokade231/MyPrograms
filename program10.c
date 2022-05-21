// Program to display 5 times Hello on screen

#include <stdio.h>

//Demonstration of SEQUENCE
void Display();       // Declaration

int main()
{
	int iValue = 0;

	printf("Enter no of times you want to display\n");
	scanf("%d",&iValue);


	 Display(iValue);       // Function call

	return 0;
}

void Display(int iNo)        // Defination
{
	if(iNo<0)    // Updater
	{
		iNo = -iNo;

	}


	int iCnt = 0;

	for(iCnt=0; iCnt<=iNo; iCnt++)
	{
		printf("Hello\n");
	}
}
