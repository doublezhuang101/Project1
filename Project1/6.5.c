#include<stdio.h>
int main()
{
	int array[5][5] =
	{
		{0,1,2,3,4},
		{5,6,7,8,9},
		{10,11,12,13,14},
		{15,16,17,18,19},
		{20,21,22,23,24}
	};
	int sum = 0, i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			if (i == j)
				sum = sum + array[i][j];
	}
	printf("sum=%d", sum);
	return 0;
}