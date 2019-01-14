#include <stdio.h>
#include <string.h>
int main()
{
	int a[] = { 15,46,41,31,4,48,45,7,8 };
	int n = sizeof(a) / sizeof(a[0]);
	int i,j;
	for (i = 0; i < n; i++)
	{
		int min = i; /*每次循环后将第i小的元素放好*/
		//记录第i个到底size - 1个元素中，最小的元素的下标
		for (j = i + 1; j < n ; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		//下面将第i小的元素放在第i个位置上，并将原来第i个位置的元素挪到后面
		int c = a[i];
		a[i] = a[min];
		a[min] = c;
	}
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}