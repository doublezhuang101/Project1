#include <stdio.h>
#include <math.h>
int main()
{
	int number = 0;
	int a, b, c, d, e;
	int i;
	printf("玫瑰花数有：\n");
	for (i = 1000; i <= 9999; i++)
	{
		a = i % 10;//个位数
		b = i % 100 / 10;//十位数
		c = i % 1000 / 100;//百位数
		d = i / 1000;//千位数
		e = pow(a, 4) + pow(b, 4) + pow(c, 4) + pow(d, 4);//各个位数的四次方和
		if (i == e)
		{
			printf("%d ",i);
			number++;
			if (number % 5 == 0) printf("\n");//5个一行
		}
	}
	printf("\n玫瑰花数共%d个", number);
	return 0;
}