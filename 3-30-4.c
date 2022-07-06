#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("請輸入整數：");
	scanf("%d", &num); 
	printf("num * 4 = %d\n", num * 4);
	printf("num / 4 = %d\n", num / 4);
	printf("num << 2 = %d\n", num << 2);
	printf("num >> 2 = %d\n", num >> 2);
	system("PAUSE");
	return 0;
}
