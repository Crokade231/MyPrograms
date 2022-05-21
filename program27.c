#include <stdio.h>

void GoldCoin(int iGram)
{
	switch(iGram)
	{
		case 1:
			printf("your amoumt is 4000\n");
			break;

		case 2:
			printf("your amoumt is 8000\n");
			break;

		case 5:
			printf("your amoumt is 20000\n");
			break;	

		case 10:
			printf("your amoumt is 40000\n");
			break;

		default:
			printf("Invalid coin weight \n");
	}

}

int main()
{
	int iValue = 0;

	printf("Enter the gold coin weight in grams : \n");
	scanf("%d",&iValue);

	GoldCoin(iValue);

	return 0;
}