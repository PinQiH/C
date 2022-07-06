#include <stdio.h>
#include <stdlib.h>

/*
//6-53//
int init();
int getans();
int compare(int, int);
int main()
{
	int a, b;
	a = init();
	b = getans();
	compare(a, b);
	system("PAUSE");
	return 0;
}
int init()
{
	int ans;
	srand((unsigned) time(NULL));
	ans = (rand()+1) % 100;
	printf("ans=%d\n", ans);
	return ans;
}
int getans()
{
	int theans;
	printf("輸入答案:");
	scanf("%d", &theans);
	return theans;
}
int compare(int a, int b)
{
	if (a == b)
	{
		printf("你答對了\n");
		return 1;
	}
	else
	{
		printf("你答錯了\n");
		return 0;
	}
}
*/

/*
int max(int, int, int);
int min(int, int, int);
int main()
{
	int a, b, c;
	printf("請輸入三整數:");
	scanf("%d %d %d", &a, &b, &c);
	printf("max=%d\n", max(a, b, c));
	printf("min=%d\n", min(a, b, c));
	system("PAUSE");
	return 0;
}
int max(int a, int b, int c)
{
	int max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	return max;
}
int min(int a, int b, int c)
{
	int min = a;
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	return min;
}
*/

/*
int fib(int);
int main()
{
	int i;
	printf("請輸入項數:");
	scanf("%d", &i);
	printf("%d\n", fib(i - 2));
	system("PAUSE");
	return 0;
}
int fib(int i)
{
	int n0 = 1, n1 = 1, n2;
	for (;i > 0; i--)
	{
		n2 = n0 + n1;
		n0 = n1;
		n1 = n2;
	}
	return n2;
}
*/

