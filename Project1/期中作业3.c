#include <stdio.h>
#include <math.h>
int main()
{
	int number = 0;
	int a, b, c, d, e;
	int i;
	printf("õ�廨���У�\n");
	for (i = 1000; i <= 9999; i++)
	{
		a = i % 10;//��λ��
		b = i % 100 / 10;//ʮλ��
		c = i % 1000 / 100;//��λ��
		d = i / 1000;//ǧλ��
		e = pow(a, 4) + pow(b, 4) + pow(c, 4) + pow(d, 4);//����λ�����Ĵη���
		if (i == e)
		{
			printf("%d ",i);
			number++;
			if (number % 5 == 0) printf("\n");//5��һ��
		}
	}
	printf("\nõ�廨����%d��", number);
	return 0;
}