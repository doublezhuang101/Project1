#include<stdio.h>
#include<string.h>
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10};
	int n = 0, count = 0, i = 0;
	int j = 0;
	count = sizeof(a) / sizeof(a[0]);
	printf("please input a number:");
	scanf("%d",&n);
	for (i = 0; i < (count - 1); i++)
		if (a[i] == n)
			a[i]=-1;
	for (i = 0; i < count; i++)
	{
		if (a[i] == -1)
			printf("   ");
		else
			printf("%3d", a[i]);
	}
	printf("\n");
	return 0;
}