#include <stdio.h>
int main()
{
	int a[5] = { 1,10,15,100 };
	int *q = &a[4];
	int x = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &x);
	int *aq = &x;
	if (x > a[3]) a[4] = x;
	for (i = 0; i <= 3; i++)
	{
		if (x > a[i] && x < a[i + 1])
		{
			for (j = 3; j > i; j--)
				*q = *(q - 1);//��ǰһ���ַָ���һ�Ȼ��ճ�һ������
			*q = &a[i + 1];//��ȡ�ո��ӵ�ַ
			*q = *aq;//����ֵ�ĵ�ַָ��ո���
		}
	}
	q =a;//�ٴε�ַ��Ϊa[0]
	for (i = 0; i <= 4; i++)
		printf("%4d", *(q+i));
	getchar();
}
