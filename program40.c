#include <stdio.h>

int fun(int iNo)
{
	int iCnt = 0;
	int iCnt1 = 0;
for(iCnt=1; iCnt<iNo; iCnt++)
{
	if((iNo%iCnt)==0)
	{
	   	  iCnt1++;
	}
}
return iCnt1;
}

int main()

{
int i = 0;
int j = 0;

printf("enter no\n");
scanf("%d",&i);

j = fun(i);

printf("%d",j);

return 0;
}