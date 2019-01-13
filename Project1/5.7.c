#include <stdio.h>
int main()
{
	int i, j, s = 0;
	for (i = 1; i < 1000; i++)
	{
		for (j = 1; j < i; j++)
			if (i%j == 0)
				s += j;
		if (i == s)
			printf("%d\n", i);
		s = 0;
	}
	return 0;
}