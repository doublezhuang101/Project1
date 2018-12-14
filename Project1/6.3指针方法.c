#include <stdio.h>
int main()
{
	int a[5] = { 1,10,15,100 };
	int *q = &a[4];
	int x = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &x);
	int *aq = &x;
	if (x > a[3]) a[4] = x;
	for (i = 0; i <= 3; i++)
	{
		if (x > a[i] && x < a[i + 1])
		{
			for (j = 3; j > i; j--)
				*q = *(q - 1);//将前一项地址指向后一项，然后空出一个格子
			*q = &a[i + 1];//获取空格子地址
			*q = *aq;//输入值的地址指向空格子
		}
	}
	q =a;//再次地址变为a[0]
	for (i = 0; i <= 4; i++)
		printf("%4d", *(q+i));
	getchar();
}
