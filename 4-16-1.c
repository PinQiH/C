#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, nnum;
	printf("��J��ơG");
	scanf("%d", &num);
	nnum = (num < 0) ? -(num) : num;
	printf("%d", nnum);
	system("PAUSE");
	return 0;
}
