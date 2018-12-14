#include <stdio.h>
int main()
{
	int s=0, n, i;
	int a = 1;
	printf("Please input n = ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a *= i;
		s = s + a;
	}
	printf("s=1!+2!+......+x!=%d\n", s);
}