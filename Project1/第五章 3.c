#include <stdio.h>
int main()
{
	int a, b,c,d;
	int r=0;
	int p;
	printf("请输入两个正整数：");
	scanf("%d %d", &a, &b);
	c = a;
	d = b;
	if (a < b)
	{
		r = a;
		a = b;
		b = r;
	}
	while (r != 0)
	{
		r = a % b;
		a=b;
		b = r;
	}
	p = c * d / a;
	printf("最大公约数为%d,最小公倍数为%d", a,p);
	return 0;
}