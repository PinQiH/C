#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("請輸入整數：");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("偶數");
	}
	else
	{
		printf("奇數");
	}
	system("PAUSE");
	return 0;
}
