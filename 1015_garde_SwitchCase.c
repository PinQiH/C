#include<stdio.h>
#include<stdlib.h>

int main(){
	char grade;
	printf("�п�J�A�����Z:");
	scanf("%c",&grade);
	switch(grade){
		case 'A': printf("�Ǵ����Z��90~100\n");
		break;
		case 'B': printf("�Ǵ����Z��80~89\n");
		break;
		case 'C': printf("�Ǵ����Z��70~79\n");
		break;
		case 'D': printf("�Ǵ����Z��60~69\n");
		break;
		default:  printf("��J���~\n");
	}
	system("PAUSE");
	return 0;
} 
