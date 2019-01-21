#include<stdio.h>
#include<string.h>
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0, count = 0, i = 0;
	count = sizeof(a) / sizeof(a[0]);
	printf("please input a number:");
	scanf("%d", &n);
	for (i = 0; i < count; i++);
	{
		if (n == a[i])
			;
	}
	if (n == 10)
		printf("Not exists!\n");
	else
	{
		for (i = n; i < count; i++)
			a[i - 1] = a[i];
		for (i = 0; i < (count - 1); i++)
			printf("%3d", a[i]);
	}
	printf("\n");
	return 0;