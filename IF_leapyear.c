#include <stdio.h>
#include <stdlib.h>

int main(){
	int year;
	printf("請輸入年份:");
	scanf("%d",&year);
	
	printf("%-5d年",year);
	if(year%400==0||(year%4==0&&year%100!=0)){
		printf("是閏年\n");
	}else{
		printf("不是閏年\n");
	}
	
	
	system("PAUSE");
	return 0;
} 
