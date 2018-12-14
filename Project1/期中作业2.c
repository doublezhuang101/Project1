#include <stdio.h>
#include <math.h>
int main()
{
	int x, y, z, t=0;
	int a;
	int number=0;
	int n = 0;
	printf("满足条件的数字为\n");
	for (a = 1000; a <= 9999; a++ )
	{
		x = a % 10;
		y = a % 100 / 10;
		z = a % 1000 / 100;
		t = a/ 1000;
		n = sqrt(a);
		if (n*n == a && t + y == 10 && x*z == 12)
		{
			printf("%d ", a);
			number++;
			if (number % 5 == 0)
				printf("\n");
		}
	}
	printf("\n共%d个数\n", number);
	return 0;
}