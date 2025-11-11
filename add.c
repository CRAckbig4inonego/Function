#include<stdio.h>
int add(int num1,int num2);
int main (){

    
    int result = add(4,5);
    printf("%d",result);

    return 0 ;
}
int add(int num1,int num2)
{
    return num1+num2;
}