//编写函数fun，其功能是：将a、b中的两个两位正整数合并成一个新的整数放在c中。合并的方式是：将a中的十位和个位数依次放在变量c的百位和个位上，b中的十位和个位数依次放在变量c的十位和千位上。
//例如，当a＝45，b＝12，调用该函数后c＝2415。
//请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
#include <stdio.h>
int fun(int a, int b)
{
	int a1, a2, b1, b2, c;
	a1 = a / 10;
	a2 = a % 10;
	b1 = b / 10;
	b2 = b % 10;
	c = a1 * 100 + a2 + b1 * 10 + b2 * 1000;
	return c;
}
int main()
{
	int   a, b; long   c;
	printf("Input a, b:");
	scanf("%d%d", &a, &b);
	c = fun(a, b);
	printf("The result is: %ld\n", c);
	return 0;
}