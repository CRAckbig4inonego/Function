#include<stdio.h>
int divide(int num1,int num2);
int main (){

int result =divide(9,3);
printf("%d",result);
    return 0 ;
}
int divide(int num1,int num2)
{
    return num1/num2;
}