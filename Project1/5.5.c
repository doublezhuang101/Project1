#include <stdio.h>
int main()
{
	int m,i;
	double s=0.0,j=1.0;
	printf("Please input a number:");
	scanf("%d", &m);
	for (i = 1; i <= m; i++)
	{
		s = s +( j/ i);
		j = -j;
	}
	printf("s=%lf", s);
	return 0;
} 