#include<stdio.h>
int main()
{
	int n, i, count = 0;
	printf("100～700之间素数为：\n");
	for (n = 100; n <= 700; n++)
	{
		for (i = 2; i < n; i++)//检验不是素数
			if (n%i == 0)
				break;
		if (i == n)
		{
			printf("%ld ", i);
			count++;
			if (count % 5 == 0) printf("\n");//5个一行
		}
	}
	printf("\n素数的个数为%d\n", count);
	return 0;
}