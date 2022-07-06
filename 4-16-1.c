#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, nnum;
	printf("¿é¤J¾ã¼Æ¡G");
	scanf("%d", &num);
	nnum = (num < 0) ? -(num) : num;
	printf("%d", nnum);
	system("PAUSE");
	return 0;
}
