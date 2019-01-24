#include<stdio.h>
int main()
{
	int array[3][4] =
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int max = 0;
	int a = 0, b = 0, i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (array[i][j] > max)
				max = array[i][j];
			a = i;
			b = j;
		}
	}
	printf("max=%d,Î»ÓÚ%2d%2d\n", max, a+1, b+1);
	return 0;
}