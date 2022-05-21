#include <stdio.h>

void DisplayClass(float fMarks)
{
	if((fMarks > 0.0) && (fMarks < 35.0))
	{
		printf("you are fail\n");
	}
	else if((fMarks >= 35.0) && (fMarks < 50.0))
	{
		printf("Pass class\n");
	}
	else if((fMarks >= 50.0) && (fMarks < 60.0))
	{
		printf("Second class\n");
	}
	else if((fMarks >= 60.0) && (fMarks < 70.0))
	{
		printf("First class\n");
	}
	else if((fMarks >= 70.0) && (fMarks < 100.0))
	{
		printf("First class with distinction\n");
	}
	else 
	{
		printf("invalid percentage\n");
	}

}

int main()
{
	float fValue = 0.0;

	printf("Enter the percentage\n");
	scanf("%f",&fValue);

	DisplayClass(fValue);

	return 0;
}