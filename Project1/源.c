//��д����void fun(char tt[]��int pp[])��ͳ����tt���洢���ַ�����'a'��'z'26��Сд��ĸ���Գ��ֵĴ����������η���pp��ָ�������С�
//���磬�������ַ���abcdefgabcdeabc�󣬳����������Ӧ���ǣ�
//3 3 3 2 2 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣
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