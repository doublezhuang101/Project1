#include <stdio.h>
#include <math.h>
int main()
{
	int sum, n,a,m,b;
	int i = 0;
	int q = 3;
	printf("Please input a number: ");
	scanf("%d", &n);
	if (n <= 1)
	{
		printf("3+33+....=%d", q);
	}
	for (a = 1,b=n-1; a < n; a++,b--)
	{
		m =3+3*pow(10, b);
		i += m;
	}
	printf("%d", i);
	return 0;
}