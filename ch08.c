#include <stdio.h>
#include <stdlib.h>

/*
//8-16//
int main()
{
	char ll[8] = "language";
	char *ptr = ll;
	printf("%c\n", *(ptr + 4));
	printf("%c\n", ll[4]);
	system("PAUSE");
	return 0;
}
*/

/*
//8-30
int min(int *, int);
int main()
{
	int arr[] = {199, 42, 300, 114, 51, 61, 77, 48, 29, 101};
	printf("min = %d", min(arr, sizeof(arr) / sizeof(int)));
	system("PAUSE");
	return 0;
} 
int min(int *arr, int n)
{
	int minimum = arr[0];
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] < minimum)
		{
			minimum = arr[i];
		}
	}
	return minimum;
} 
*/

/*
void printstar(int);
void bubblesort(int *, int);
int main()
{
	int i, j, size, star;
	int arr[] = {80, 90, 40, 70, 50, 60};
	size = sizeof(arr) / sizeof(int);
	printf("before sort\n");
	for(i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("需要幾顆星號:");
	scanf("%d", &star);
	printstar(star);
	bubblesort(arr, size);
	printstar(star);
	printf("after sort\n");
	for(i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	system("PAUSE");
	return 0;
}
void printstar(int star)
{
	int i;
	for (i = 0; i <star; i++)
	{
		printf("*");
	}
	printf("\n");
}
void bubblesort(int *arr, int size)
{
	int i, j, k, flag, temp;
	for (i = 0; i < size; i++)
	{
		flag = 0;
		printf("before pass\n");
		for (k = 0; k < size - 1; k++)
		{
			printf("%d ", arr[k]);
		}
		printf("\n");
		for (j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 1;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			printf("after compare\n");
			for (k = 0; k < size - 1; k++)
			{
				printf("%d ", arr[k]);
			}
			printf("\n");
		}
		printf("after pass\n");
		for (k = 0; k < size - 1; k++)
		{
			printf("%d ", arr[k]);
		}
		printf("\n");
		if (flag == 0)
		{
			break;
		}
	}
}
*/


double mean(int *, int);
double variance(int *, int, double);
int main()
{
	int data[10];
	int i;
	double meanvalue, variancevalue;
	for (i = 0; i < 10; i++)
	{
		printf("輸入data[%d]:", i);
		scanf("%d", &data[i]);
	}
	meanvalue = mean(data, 10);
	printf("mean = %f\n", meanvalue);
	variancevalue = variance(data, 10, meanvalue);
	printf("variance = %f\n", variancevalue);
	printf("standarddeviance = %f\n", sqrt(variancevalue));
	system("PAUSE");
	return 0;
}
double mean(int *data, int n)
{
	int i;
	double total = 0;
	double meanvalue;
	for (i = 0; i < n; i++)
	{
		total += data[i];
	}
	meanvalue = total / n;
	return meanvalue;
}
double variance(int *data, int n, double meanvalue)
{
	int i;
	double total = 0;
	double variancevalue;
	for (i = 0; i < n; i++)
	{
		total += pow((*(data + i) - meanvalue), 2);
	}
	variancevalue = total / n;
	return variancevalue;
}
