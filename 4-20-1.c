#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ch;
	printf("輸入一個字元：");
	scanf("%c", &ch);
	if (ch >= 48 && ch <= 57)
	{
		printf("數字");
	}
	else if (ch >= 65 && ch <= 90)
	{
		printf("大寫字母"); 
	}
	else if (ch >= 97 && ch <= 122)
	{
		printf("小寫字母");
	}
	else
	{
		printf("符號"); 
	}
	system("PAUSE");
	return 0;
}
