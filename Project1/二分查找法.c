#include "stdio.h"
#include "stdlib.h"
main()
{
	int  key = 0;
	int  a[] = { 1,2,3,4,5,6,7,8,9 };
	int  low, high; /*flag为标志位，为1表示key值在数组中，为0则不存在*/
	scanf("%d", &key);
	int lenght=0;
	low = 0;
	lenght = sizeof(a) / sizeof(a[0]);
	high = lenght - 1;
	while (low <= high) 
	{	
		int mid = (low + high) / 2;
		if (a[mid] < key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	if ((low < lenght) && (a[low] == key))
		printf("找到key值，下标为%d\n", low);
	return 0;
}