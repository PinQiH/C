#include <stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	printf("請輸入a:");
	scanf("%d", &a);
	printf("請輸入b:");
	scanf("%d", &b);
	printf("請輸入c:");
	scanf("%d", &c);
	printf("三數之和:%d\n", a + b + c);
	printf("ab相除之商:%d\n", a / b);
	printf("ab相除之餘數:%d\ns", a % b);
	system("PAUSE");
	return 0;
}
