#include <stdio.h>
int main()
{
	int y, number=0, flag=0;
	printf("��Ԫ1600����Ԫ2016�����е��������Ϊ��\n");
	for (y = 1600; y <= 2016; y++)
	{
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		{
			printf("%d ", y);
			number++;
			if (number % 5 == 0)
				printf("\n");
		}
	}
}