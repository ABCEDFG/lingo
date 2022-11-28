#include <stdio.h>

void main()
{
	int a[] = {5, 2, 6, 7, 3, 5, 4, 6, 4, 5, 2, 3};
	int b[] = {0, 100, 0, 200, 90, 0, 110, 0, 100, 0, 250, 50};
	int sum = 0;
	
	for(int i = 0; i < 12; i++)
	{
		sum += a[i] * b[i];
	}
	
	printf("最终运费为：%d", sum);
}