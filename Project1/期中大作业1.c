#include <stdio.h>
int main()
{
	int n;
	int a, b, c;
	for (n = 200; n <= 300; n++)
	{
		a = n % 10;
		b = n / 100;
		c = n % 100 / 10;
		if (a + b + c == 12)
			printf("%d����λ��֮��Ϊ12\n", n);
		if (a*b*c == 42)
			printf("%d����λ��֮��Ϊ42\n", n);
	}
	return 0;
}