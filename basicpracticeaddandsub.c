#include<stdio.h>
void riya (float a, float b){

float add = a+b;
float sub = a-b;
printf("%f\n%f",add,sub);
    return;
}


int main (){
printf("Enter number 1 :");
float a ;
scanf("%f",&a);
printf("Enter number 2 : ");
float b;
scanf("%f",&b);
riya(a,b);

    return 0 ;
}