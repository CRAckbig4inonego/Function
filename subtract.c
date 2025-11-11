#include<stdio.h>
int sub(int num1,int num2);
int main (){

int result = sub(4,5);
printf("%d",result);

    return 0 ;
}
int sub(int num1,int num2)
{
    return num1-num2;
}