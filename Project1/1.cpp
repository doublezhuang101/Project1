#include <stdio.h>
int main()
{
	int a[5] = { 1,10,15,100 };
	int *q = a;
	int x;
	scanf("%d", &x);
	int *address = &x;
	if (x > a[3])
		a[4] = x;
	for (int i = 0; i <= 3; i++)
	{
		if (x < *q)
		{
			int *p = q;
			if (*(q + 2) != NULL)
			{
				*(q + 1) = *q;
				q++;
			}
			*p = x;
			break;
		}
		q++;
	}
	q = a;
	for (int i = 0; i <= 4; i++)
		printf("%4d", *(q + i));
	getchar();
}
