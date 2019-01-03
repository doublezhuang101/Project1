//编写函数int fun(int lim, int aa[MAX])，其功能是求出小于或等于lim的所有素数并放在aa数组中，并返回所求出的素数的个数。
//请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
#include<stdio.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
	int i = 0, j = 0, k = 0;
	int count = 0;
	for (i = 2; i <= lim; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >= i)
		{
			aa[k++] = i;
			count++;
		}
	}
	return count;
}
int main()
{
	int limit, i, sum;
	int aa[MAX];
	system("CLS");
	printf("输入一个整数:");
	scanf("%d", &limit);
	sum = fun(limit, aa);
	for (i = 0; i < sum; i++)
	{
		if (i % 10 == 0 && i != 0)    /*每行输出个数*/
			printf("\n ");
		printf("%5d ", aa[i]);
	}
	return 0;
}