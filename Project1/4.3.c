#include <stdio.h>
int main()
{
	int x;
	int y;
	scanf("%d", &x);
	if (x < 2) y = 3*x + 5;
	else if (x < 12) y = x * x;
	else if (x >= 12) y = 4 * x - 7;
	printf("y=%d", y);
}