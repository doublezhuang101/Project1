#include<stdio.h>
int main()
{
	int n, i, count = 0;
	printf("100��700֮������Ϊ��\n");
	for (n = 100; n <= 700; n++)
	{
		for (i = 2; i < n; i++)//���鲻������
			if (n%i == 0)
				break;
		if (i == n)
		{
			printf("%ld ", i);
			count++;
			if (count % 5 == 0) printf("\n");//5��һ��
		}
	}
	printf("\n�����ĸ���Ϊ%d\n", count);
	return 0;
}