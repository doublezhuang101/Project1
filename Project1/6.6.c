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
	int n = 0;
	for (i = 4; i > 0; i--,n++)
	{
		for ( j=0; j<5-n;j++)
		{
			sum = array[i][j] + sum;
		}
	}
	printf("%d",sum);
	return 0;
}