#include <stdio.h>


int Sum(int iNo)       
{
	int iCnt = 0;
	int iAdd = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iAdd = iAdd + iCnt;
	}
	
	return iAdd;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("enter numbers till u want to Add\n");
	scanf("%d",&iValue);

	iRet = Sum(iValue);

	printf("%d\n",iRet);


	return 0;
}