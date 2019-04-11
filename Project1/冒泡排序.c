#include <stdio.h>
#include <string.h>
int swap(int x, int y);
int main()
{
	int a[] = { 15,46,41,31,4,48,45,7,8 };
	int i, j, flag = 0;
	int n;
	int c;
	n = sizeof(a) / sizeof(a[0]);
	printf("%d\n", n);
	for (i = n - 1; i > 0; i--)
	{
		flag = 0;
		for (j = 0; j < i; j++)
		{
			if (a[j] < a[j + 1])
			{
				/*swap(a[j], a[j + 1]);*/
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
int swap(int x, int y)
{
	int c;
	c = x;
	x= y;
	y = c;
	return(x, y);
}