//编写函数void fun(char tt[]，int pp[])，统计在tt所存储的字符串中'a'到'z'26个小写字母各自出现的次数，并依次放在pp所指的数组中。
//例如，当输入字符串abcdefgabcdeabc后，程序的输出结果应该是：
//3 3 3 2 2 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
#include <stdio.h>
#include <string.h>
void fun(char tt[], int pp[])
{
	int t;
	for (t = 0; t < 26; t++)
	{
		pp[t] = 0;
	}
	while (*tt != '\0')
	{
		t = *tt - 'a';
		pp[t]++;
		tt++;
	}
}

int main()
{
	char aa[1000];
	int  bb[26], k;

	printf("\nPlease enter  a char string:"); scanf("%s", aa);
	fun(aa, bb);
	for (k = 0; k < 26; k++) printf("%d ", bb[k]);
	printf("\n");
	return 0;
}