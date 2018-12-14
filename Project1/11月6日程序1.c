#include <stdio.h>
int main()
{
	int i = 1;
	int k = 1;
	int sum = 1;
	int n;
	printf("please input a number,n=: ");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		k *= 10;
		k += i + 1;
		sum = sum + k;
	}
	printf("the results is %d\n", sum);
	return 0;
}