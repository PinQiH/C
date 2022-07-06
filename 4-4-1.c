#include <stdio.h>
#include <stdlib.h>
int main()
{
	int score;
	printf("請輸入分數：");
	scanf("%d", &score);
	if (score >= 60)
	{
		printf("您通過了\n");
	}
	if (score >= 0)
	{
		printf("您的分數是:%d\n", score);
	}
	system("PAUSE");
	return 0;
 } 
