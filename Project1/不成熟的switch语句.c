#include <stdio.h>
int main()
{
	signed int x;
	int y;
	signed int t;
	printf("Please enter a number: ");
	scanf("%d", &x);
	t = x / 50;
	printf("t=%d\n",t);
	switch (t)
	{
	case 0:
		printf("y=%d", 3 * x - 2); break;
	case 1:
		printf("y=%d", 4 * x + 1); break;
	default:
		printf("y=%d", (x < 0 ? x : (5 * x)));
	}
	
 }
