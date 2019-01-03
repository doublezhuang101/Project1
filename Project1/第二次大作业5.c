//编写函数fun，其功能是：利用下面的简单迭代方法求方程cos(x)－x＝0的一个实根。
//
//迭代步骤如下：
//(1)取x1初值为0.0；
//(2)x0＝x1，将x1的值赋给x0；
//(3)x1＝cos(x0)，求出一个新的x1；
//(4)若x0－x1的绝对值小于0.000001，执行步聚(5)，否则执行步聚(2)；
//(5)所求x1就是方程cos(x)－x＝0的一个实根，作为函数值返回。
//程序将输出结果Root＝0.739086。
//请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号填入你编写的若干语句。
#include <math.h>
#include <stdio.h>
double fun()
{
	float x1 = 0.0;
	float x0 = 0;
	do
	{
		x0 = x1;
		x1 = cos(x0);
	} 
	while ((fabs(x0 - x1)) > 0.000001);
	return x1;
}

int main()
{
	printf("Root =%f\n", fun());
	return 0;
}