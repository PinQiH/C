//�Ĥ@�D:�إ߿��A���ϥΪ̿�ܨD�̤j�ȩγ̤p��
//�ϥ�function�Mpointer�Adata[]={80,60,90,20,10} 

#include<stdio.h>
#include<stdlib.h>

//�ŧiFunction

void max_f(int *);
void min_f(int *); 

int main(){
	printf("find the max enter 1, the min enter 2: ");
	int c;
	scanf("%d",&c);
	int data[]={80,60,90,20,10};
	
	//printf("%d\n",c);//�ˬd��J
	
	switch(c){
		case 1: max_f(data);
				break;
		case 2: min_f(data);
				break;
		default: printf("error!\n");
	} 
	
	system("PAUSE");
	return 0;
} 

//*p=data

void max_f(int *p){
	int max=*p;
	int i;
	for(i=1;i<5;i++){
		if(max<*(p+i)){
			max=*(p+i);
		}
	}
	printf("The maximum is %d\n",max);
}
void min_f(int *p){
	int min_index=0;
	int i;
	for(i=1;i<5;i++){
		if(*(p+min_index)>*(p+i)){
			min_index=i;
		}
	}
	printf("The minimum is %d\n",*(p+min_index));
}
