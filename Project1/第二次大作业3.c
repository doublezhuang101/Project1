/*3.请编写函数fun，其功能是：找出2×M整型二维数组中最大元素的值，并将此值返回调用函数。
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。*/
#include <stdio.h>
#define M 4
int fun(int a[][M])
{
	int i, j;
	int max = a[0][0];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (max < a[i][j])
				max = a[i][j];
		}
	}
	return max;
}

int main()
{
	int arr[2][M] = { 5,8,3,45,76,-4,12,82 };
	printf("max =%d\n", fun(arr));
	return 0;
}