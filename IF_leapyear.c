#include <stdio.h>
#include <stdlib.h>

int main(){
	int year;
	printf("�п�J�~��:");
	scanf("%d",&year);
	
	printf("%-5d�~",year);
	if(year%400==0||(year%4==0&&year%100!=0)){
		printf("�O�|�~\n");
	}else{
		printf("���O�|�~\n");
	}
	
	
	system("PAUSE");
	return 0;
} 
