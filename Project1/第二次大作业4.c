/*��д����fun���书���ǣ�ʵ�������ַ���������(��Ҫʹ�ÿ⺯��strcat)������p2��ָ���ַ������ӵ�p1��ָ���ַ����ĺ��档
���磬�ֱ��������������ַ�����
FirstString����
SecondString
���������
FirstString����SecondString
����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣*/
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