#include <stdio.h>
int main()
{
	char ch;
	ch=getchar();
	ch = (ch >= 'a'&&ch <= 'z') ? (ch - 32) : (ch);
	putchar(ch);
	return 0;
}