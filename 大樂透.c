#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//49�Ӹ��X��  6�Ӥ@�븹 1�ӯS�O��
//��k1 
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
	printf("�@�븹: ");
	for (i = 0; i < 6; i++)
	{
		printf("%3d", num[i]);
	} 
	printf("\n"); 
	printf("�S�O��: %3d\n", num[i]);
	system("PAUSE");
	return 0;
}
*/

//��k2(13-31)
#define randomize() srand((unsigned) time(NULL))
#define random(x) rand() % x
int main()
{
	int a[50] = {0};
	int i, y;
	randomize();
	printf("�j�ֳz���X:");
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
