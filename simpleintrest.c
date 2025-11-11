#include<stdio.h>
int calculate(int principle,int rate,int time);
int main (){

int result = calculate(2000,5,10);
printf("%d",result);
    return 0 ;
}
int calculate(int principle,int rate,int time)
{
    return (principle*rate*time)/100;
}