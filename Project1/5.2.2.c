//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a=0;
//	int i = 0;
//	double m = 0.0;
//	int number = 0;
//	for (i = 500; i < 1000; i++)
//	{
//		for (a = 1; a <= i / 2; a++)
//		{
//			if (i%a == 0)
//				number++;
//		}
//	}
//	printf("%d", number);
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int prime(int x)
{
	int i;
	for (i = 2; i <= sqrt(x); i++)
		if (x%i == 0)return 0;
	return 1;
}
int main()
{
	int i, n = 0;
	for (i = 501; i < 1000; i += 2)
		if (prime(i))n++;
	printf("%d\n", n);
	return 0;
}