#include<stdio.h>
int modulo(int num1,int num2);
int main (){

int result = modulo(1,9);
printf("%d",result);
    return 0 ;
}
int modulo(int num1,int num2)
{
    return num1%num2;
}