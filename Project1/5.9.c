#include <stdio.h>
int main()
{
	int i, j;
	printf("Output :\n");
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <=i; j++)
			printf("%d*%d=%d ", i, j, i*j);
		printf("\n");
	}
	return 0;
}