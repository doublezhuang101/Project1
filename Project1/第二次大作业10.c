//函数fun的功能是：将s所指字符串中下标为偶数的字符删除，剩余字符形成的新串放在t所指数组中。
//例如，当s所指字符串中的内容为"ABCDEFGHIJK"时，在t所指数组中的内容应是："BDFHJ"。
//请勿改动函数main和其它函数中的任何内容。仅在函数fun的花括号中填入你编写的若干语句。
#include <stdio.h>
#include <string.h>
void fun(char s[], char t[])
{
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i = i + 2)
		t[j++] = s[i];
	t[j] = '\0';
}

int main()
{
	char   s[100], t[100];
	printf("\nPlease enter string S:"); scanf("%s", s);
	fun(s, t);
	printf("\nThe result is: %s\n", t);
	return 0;
}