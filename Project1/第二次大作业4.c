/*编写函数fun，其功能是：实现两个字符串的连接(不要使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串的后面。
例如，分别输入下面两个字符串：
FirstString－－
SecondString
程序输出：
FirstString－－SecondString
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。*/
#include <stdio.h>
void fun(char p1[], char p2[])
{
	int i, j;
	for (i = 0; p1[i] != '\0'; i++)
		;
	for (j = 0; p2[j]; i++, j++)
		p1[i] = p2[j];
	p1[i] = '\0';
}

int main()
{
	char s1[80], s2[40];

	printf("Enter s1 and s2:\n");
	scanf("%s%s", s1, s2);
	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	printf("Invoke fun(s1,s2):\n");
	fun(s1, s2);
	printf("After invoking:\n");
	printf("%s\n", s1);
	return 0;
}