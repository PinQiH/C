#include<stdio.h>
#include<stdlib.h>

int main(){
	char grade;
	printf("請輸入你的成績: ");
	scanf("%c",&grade);
	switch(grade){
		case 'A': printf("學期成績為90~100\n");
		break;
		case 'B': printf("學期成績為80~89\n");
		break;
		case 'C': printf("學期成績為70~79\n");
		break;
		case 'D': printf("學期成績為60~69\n");
		break;
		default:  printf("輸入錯誤\n");
	}
	system("PAUSE");
	return 0;
} 
