//����fun�Ĺ����ǣ���s��ָ�ַ������±�Ϊż�����ַ�ɾ����ʣ���ַ��γɵ��´�����t��ָ�����С�
//���磬��s��ָ�ַ����е�����Ϊ"ABCDEFGHIJK"ʱ����t��ָ�����е�����Ӧ�ǣ�"BDFHJ"��
//����Ķ�����main�����������е��κ����ݡ����ں���fun�Ļ��������������д��������䡣
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