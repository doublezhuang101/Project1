#include<stdio.h>
int main()
{
	int array[11][11] = { { 1 },{1,1} };
	int i, j;
	for (i = 1; i < 10; i++)
	{
		array[i][0] = 1;
		for (j = 1; j < 10; j++)
		{
			array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
		}
			
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (array[i][j] == 0)
				printf("   ");
			else
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}