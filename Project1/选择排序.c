#include <stdio.h>
#include <string.h>
int main()
{
	int a[] = { 15,46,41,31,4,48,45,7,8 };
	int n = sizeof(a) / sizeof(a[0]);
	int i,j;
	for (i = 0; i < n; i++)
	{
		int min = i; /*ÿ��ѭ���󽫵�iС��Ԫ�طź�*/
		//��¼��i������size - 1��Ԫ���У���С��Ԫ�ص��±�
		for (j = i + 1; j < n ; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		//���潫��iС��Ԫ�ط��ڵ�i��λ���ϣ�����ԭ����i��λ�õ�Ԫ��Ų������
		int c = a[i];
		a[i] = a[min];
		a[min] = c;
	}
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}