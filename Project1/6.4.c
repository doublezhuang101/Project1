#include<stdio.h>
#include<string.h>
int main()
{
	int a[] = { 1,7,87,9,78,798,54,64 };
	int n,count=0,i=0;
	count = sizeof(a) / sizeof(a[0]);
	printf("please input a number:");
	scanf("%d", n);
	for (; i < count; i++);
	{
		if (a[i] == n)
			a[i] = -1;
	}
	for(i=0;i<)
}