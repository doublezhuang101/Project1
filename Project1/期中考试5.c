#include<stdio.h>
int main()
{
	int x, i, count = 0;
	printf("������һ�����֣�");
	scanf("%d", &x);
	for (i = 1; i <= 100; i++)
		if (x%i == 0)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	printf("\n��%d�������ܱ�%d����\n", count, x);
	return 0;
}