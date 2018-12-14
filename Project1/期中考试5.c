#include<stdio.h>
int main()
{
	int x, i, count = 0;
	printf("请输入一个数字：");
	scanf("%d", &x);
	for (i = 1; i <= 100; i++)
		if (x%i == 0)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	printf("\n有%d个整数能被%d整除\n", count, x);
	return 0;
}