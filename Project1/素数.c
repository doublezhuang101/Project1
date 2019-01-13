#include <stdio.h>
#include <math.h>
int fun(int n);
int main()
{
	int i = 0;
	int number = 0;
	for (i = 501; i <= 1000; i + 2)
		number = fun(i);
	printf("%d", number);
	return 0;
}
int fun(int n)
{
	int j = 0;
	int count = 0;
	for (j = 1; j < n; j++)
	{
		if (n%j == 0) break;
		if (j >= n) count++;
	}
	return count;
}
