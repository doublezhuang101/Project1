#include <math.h>
#include <stdio.h>
double   fun(int  m)
{
	double n = 0.0;
	int i = 0;
	for (i = 1; i <= m; i++)
		n = n + log(i);
		return(sqrt(n));
}
int main()
{
	printf("%f\n", fun(20));
	return 0;
}