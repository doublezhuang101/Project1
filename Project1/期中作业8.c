#include<stdio.h>
#include<math.h>
int main()
{
	int x, i;
	int a, b,c,d;
	for (x = 1000; x <= 9999; x++)
	{
		a = x / 1000;
		b = (x % 1000) / 100;
		c = (x % 100) / 10;
		d = x % 10;
		i = sqrt(x);
		if (a == b && c == d && b != c && x == (int)pow(i, 2))
			printf("符合条件的数字为%d\n", x);
	}
}