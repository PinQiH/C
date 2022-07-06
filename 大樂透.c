#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//49個號碼取  6個一般號 1個特別號
//方法1 
/*
int main()
{
	int i, j, temp;
	int num[7]; 
	srand(time(NULL));
	for (i = 0; i < 7; i++)
	{
		temp = (rand() % 49) + 1;
		for (j = 0; j < i; j++)
		{
			if (temp == num[j])
			{
				i--;
				break;
			}
		}
		num[i] = temp;
	}
	printf("一般號: ");
	for (i = 0; i < 6; i++)
	{
		printf("%3d", num[i]);
	} 
	printf("\n"); 
	printf("特別號: %3d\n", num[i]);
	system("PAUSE");
	return 0;
}
*/

//方法2(13-31)
#define randomize() srand((unsigned) time(NULL))
#define random(x) rand() % x
int main()
{
	int a[50] = {0};
	int i, y;
	randomize();
	printf("大樂透號碼:");
	for (i = 0; i < 6; )
	{
		y = random(49) + 1;
		if (a[y] == 0)
		{
			a[y] = y;
			printf("%5d", y);
			i++;
		}
	}
	printf("\ndone");
	getchar();
	system("PAUSE");
	return 0;
} 
