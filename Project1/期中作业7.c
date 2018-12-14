#include <stdio.h>
int main()
{
	int i, number = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 && i % 3 == 0)
		{
			printf("%d ", i);
			number++;
			if (number % 5 == 0) 
			printf("\n");
		}
	}
	printf("\n100以内能被3整除且个位数字为9的正整数有%d个\n", number);
}