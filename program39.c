#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt = 0;
	int iChk = 0;

	if(iNo<=0)
	{
		iNo=-iNo;
	}

	for(iCnt=2; (iCnt <= (iNo/2)); iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			if(iCnt < 1)
			{
				iChk = 0;
			}
			else
			{
				iChk = 1;
			}
		}
	}
 
 	if(iChk < 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main ()
{
	int iValue = 0;
	bool bRet;

	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet= CheckPrime(iValue);
	
	if(bRet==true)
	{
		printf("%d is a prime number\n",iValue);
	}
	else
	{
		printf("%d is not a prime number\n",iValue);
	}

	return 0;
}