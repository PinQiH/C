#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[]={0,1,2,3,4};
	int *p[]={a,a+1,a+2,a+3,a+4}; //�s��a[]����}�A�i��*���}�Ӧs���� 
	int **pp=p;
	
	//pp���Vp���Ĥ@�ӡA�]�N�Oa����}
	//��*���}��Oa����}�A��**���}�h�i����a[0]��value 
	
	printf("**pp= %d\n",**pp); //pp>a��address>0 
	printf("*(*(pp+1)+2)= %d\n",*(*(pp+1)+2));
	
	//pp+1>a+1��address>a+1+2���ȡA�]�N�Oa+3���ȡA3 
	
	printf("*(pp[0]+2)= %d\n",*(pp[0]+2)); //pp[0]>a����}>a+2���ȡA2 
	printf("*(*(p+1)+2)= %d\n",*(*(p+1)+2));
	
	//p+1�]�N�Oa+1����}>a+1+2�A�]�N�Oa+3����}>��a+3���ȡA3 
	system("PAUESE");
	return 0;
}
