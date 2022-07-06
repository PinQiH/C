#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("請輸入整數:");
	scanf("%d", &num);
	printf("num的平方值:%d\n", num * num);
	printf("num的立方值:%d\n", num * num * num);
	system("PAUSE");
	return 0;
} 
