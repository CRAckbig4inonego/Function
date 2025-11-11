#include<stdio.h>
void swap(float x, float y){
 x=x+y;
 y=x-y;
 x=x-y;
 printf("value of a is : %f\n",x);
 printf("value of b is : %f",y);
    return ;
}
float main(){
printf("Enter first number a is :");
float x;
scanf("%f",&x);
printf("Enter second number b is : ");
float y ;
scanf("%f",&y);
swap(x,y);

    return 0 ;
}