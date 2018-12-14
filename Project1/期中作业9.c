#include<stdio.h>
int main()
{
	char z;
	int  a = 0/*英文字母*/, b = 0/*空格*/, c = 0/*数字*/, d = 0/*其他字符*/;
	printf("请输入一行字符:");
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
	printf("这行字符有%d个英文字母，%d个空格，%d个数字，%d个其他字符\n", a, b, c, d);
	return 0;
}