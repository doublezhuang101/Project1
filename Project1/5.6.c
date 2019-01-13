#include <stdio.h>
int main()
{
	int n, s = 0,t=0;
	int i;
	printf("Please input n=:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		t = t * 10 + 3;
		s += t;
	}
	printf("3+33+3333...=%d", s);
}