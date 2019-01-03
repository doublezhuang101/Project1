/*2. 编写函数fun，其功能是：求出1~1000之间能被7或11整除，但不能同时被7和11整除的所有整数，并将其放在a所指的数组中，通过函数返回值返回这些数的个数。
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。*/
#include <stdio.h>
int  fun(int a[])
{
	int i, number=0,b=0;
	for (i = 0; i < 1000; i++)
	{
		if (i % 7 == 0 || i % 11 == 0)
			if (i % 77 != 0)
			{
				a[b++] = i;
				number++;
			}
	}
	return number;
}
int main()
{
	int aa[1000], n, k;
	n = fun(aa);
	for (k = 0; k < n; k++)
	{
		printf("%5d", aa[k]);
		if ((k + 1) % 10 == 0)
			printf("\n");
	}
	return 0;
}
