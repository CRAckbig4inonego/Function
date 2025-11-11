#include<stdio.h>
void swap(int x, int y){
 int temp=x;
 x=y;
 y=temp; 
 printf("value of a is : %d\n",x);
 printf("value of b is : %d",y);
    return ;
}
int main(){
printf("Enter first number a is :");
int x;
scanf("%d",&x);
printf("Enter second number b is : ");
int y ;
scanf("%d",&y);
swap(x,y);

    return 0 ;
}