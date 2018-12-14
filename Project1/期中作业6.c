#include<stdio.h>
int main()
{
	int a, b;
	for (a = 1; a <= 4; a++)
	{
		for (b = 4 - a; b > 0; b--)
			printf(" ");
		for (b = 2 * a - 1; b > 0; b--)
			printf("*");
		printf("\n");
	}
	for (a = 4; a > 1; a--)
	{
		for (b = 5 - a; b > 0; b--)
			printf(" ");
		for (b = 2 * a - 3; b > 0; b--)
			printf("*");
		printf("\n");
	}
	return 0;
}