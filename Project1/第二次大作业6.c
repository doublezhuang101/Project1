//��д����int fun(int lim, int aa[MAX])���书�������С�ڻ����lim����������������aa�����У�������������������ĸ�����
//����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣
#include<stdio.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
	int i = 0, j = 0, k = 0;
	int count = 0;
	for (i = 2; i <= lim; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >= i)
		{
			aa[k++] = i;
			count++;
		}
	}
	return count;
}
int main()
{
	int limit, i, sum;
	int aa[MAX];
	system("CLS");
	printf("����һ������:");
	scanf("%d", &limit);
	sum = fun(limit, aa);
	for (i = 0; i < sum; i++)
	{
		if (i % 10 == 0 && i != 0)    /*ÿ���������*/
			printf("\n ");
		printf("%5d ", aa[i]);
	}
	return 0;
}