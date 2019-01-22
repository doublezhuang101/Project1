#include<stdio.h>
int main()
{
	int a[] = { 1,2,2,2,5,6,7,8,9,10 };
	int check_num = 0;
	int count = sizeof(a) / sizeof(a[0]);
	int flag=0;
	printf("please input a number : ");
	scanf("%d", &check_num);
	for (int i = 0; i < count; i++) 
	{
		for (int i = 0; i < count; i++)
		{
			if (a[i] == check_num)
			{
				for (int j = i; j < count; j++)
				{
					a[j] = a[j + 1];
				}
				flag++;
			}
		}
	}
	for (int i = 0; i < count-flag; i++)
	{
		printf("%3d", a[i]);
	}
	return 0;
}