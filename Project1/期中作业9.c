#include<stdio.h>
int main()
{
	char z;
	int  a = 0/*Ӣ����ĸ*/, b = 0/*�ո�*/, c = 0/*����*/, d = 0/*�����ַ�*/;
	printf("������һ���ַ�:");
	z = getchar();
	while (z != '\n')
	{
		if (z >= 'A'&&z <= 'Z' || z >= 'a'&&z <= 'z')
			a++;
		else
			if (z >= '0'&& z <= '9')
				c++;
			else
				if (z == ' ')
					b++;
				else
					d++;
		z = getchar();
	}
	printf("�����ַ���%d��Ӣ����ĸ��%d���ո�%d�����֣�%d�������ַ�\n", a, b, c, d);
	return 0;
}