#include <stdio.h>
int main()
{
	int a, b,c,d;
	int r=0;
	int p;
	printf("������������������");
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
	printf("���Լ��Ϊ%d,��С������Ϊ%d", a,p);
	return 0;
}