#include <stdio.h>
void  fun(int a[3][3], int b[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			b[i][j] = a[i][j] + a[j][i];
}

int main()   /* Ö÷³ÌÐò*/
{
	int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }, t[3][3];
	int i, j;

	fun(a, t);
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++)
			printf("%7d", t[i][j]);
		printf("\n");
	}
	return 0;
}