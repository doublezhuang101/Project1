//编写函数void fun(char tt[]，int pp[])，统计在tt所存储的字符串中'a'到'z'26个小写字母各自出现的次数，并依次放在pp所指的数组中。
//例如，当输入字符串abcdefgabcdeabc后，程序的输出结果应该是：
//3 3 3 2 2 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
#include <stdio.h>
#include <string.h>
void fun(char tt[], int pp[])
{
	int i;
	for (i = 0; i < 26; i++)
		pp[i] = 0;
	for (i = 0; tt[i] != '\0'; i++)
		if (tt[i] > 'a'&&tt[i] <= 'z')
			pp[tt[i] - 'a']++;
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