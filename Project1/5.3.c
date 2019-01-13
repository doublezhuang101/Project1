#include <stdio.h>
int main()
{
	int gbs = 0, gys = 0;
	int a = 32, b = 12;
	int c=0,i=0;
	c = a * b;
	do
	{
		i = a % b;
		a = b;
		b = i;
	} while (i != 0);
		printf("gys=%d\n",a);
		printf("gbs=%d", c / a);
		return 0;
}