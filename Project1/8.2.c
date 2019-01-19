#include <stdio.h>
#define ADD(x) x+x
int main()
{
	int m = 1, n = 2, k = 3;
	int sum;
	sum = (ADD((m + n)))*k;
	printf("%d\n", sum);
	return 0;
}