#include<stdio.h>
#include<stdlib.h>
//Call by value

void swap1(int x, int y);
void swap2(int *a, int *b);

int main()
{
    //Call by value
    int x=100,y=400;
    printf("call by value\n");
    printf("befor swap: x= %d, y= %d\n", x, y);
    swap1(x,y);//�ǰe�� 
    printf("after swap: x= %d, y= %d\n", x, y);
    
    printf("\n");
    
    //Call by address
    int a=100,b=400;
    printf("call by address\n");
    printf("befor swap: a= %d, b= %d\n", a, b);
    swap2 (&a, &b);//�ǰe�a�} 
    printf("after swap: a= %d, b= %d\n", a, b);
    system("PAUSE");
    return 0;
}

void swap1 (int x, int y)//������ 
{
     int temp;
     temp=x;
     x=y;
     y=temp;
     printf("after swap: a= %d, b= %d\n", x, y);
 }
 
 void swap2 (int *x, int *y)//�����a�}�A��*���}���X�a�}���s������ 
{
     int temp;
     temp=*x;
     *x= *y;
     *y=temp;
     printf("after swap: a= %d, b= %d\n", *x, *y);
 }


