#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ch;
	printf("��J�@�Ӧr���G");
	scanf("%c", &ch);
	if (ch >= 48 && ch <= 57)
	{
		printf("�Ʀr");
	}
	else if (ch >= 65 && ch <= 90)
	{
		printf("�j�g�r��"); 
	}
	else if (ch >= 97 && ch <= 122)
	{
		printf("�p�g�r��");
	}
	else
	{
		printf("�Ÿ�"); 
	}
	system("PAUSE");
	return 0;
}
