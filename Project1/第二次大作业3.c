/*3.���д����fun���书���ǣ��ҳ�2��M���Ͷ�ά���������Ԫ�ص�ֵ��������ֵ���ص��ú�����
����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣*/
#include <stdio.h>
#define M 4
int fun(int a[][M])
{
	int i, j;
	int max = a[0][0];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (max < a[i][j])
				max = a[i][j];
		}
	}
	return max;
}

int main()
{
	int arr[2][M] = { 5,8,3,45,76,-4,12,82 };
	printf("max =%d\n", fun(arr));
	return 0;
}