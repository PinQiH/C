#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[]={0,1,2,3,4};
	int *p[]={a,a+1,a+2,a+3,a+4}; //存放a[]的位址，可用*打開來存取值 
	int **pp=p;
	
	//pp指向p的第一個，也就是a的位址
	//用*打開後是a的位址，用**打開則可取到a[0]的value 
	
	printf("**pp= %d\n",**pp); //pp>a的address>0 
	printf("*(*(pp+1)+2)= %d\n",*(*(pp+1)+2));
	
	//pp+1>a+1的address>a+1+2的值，也就是a+3的值，3 
	
	printf("*(pp[0]+2)= %d\n",*(pp[0]+2)); //pp[0]>a的位址>a+2的值，2 
	printf("*(*(p+1)+2)= %d\n",*(*(p+1)+2));
	
	//p+1也就是a+1的位址>a+1+2，也就是a+3的位址>取a+3的值，3 
	system("PAUESE");
	return 0;
}
