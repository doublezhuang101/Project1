//��д����void fun(char tt[]��int pp[])��ͳ����tt���洢���ַ�����'a'��'z'26��Сд��ĸ���Գ��ֵĴ����������η���pp��ָ�������С�
//���磬�������ַ���abcdefgabcdeabc�󣬳����������Ӧ���ǣ�
//3 3 3 2 2 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣
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