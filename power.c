#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter value of a : ");
    int a;
    scanf("%d", &a);
    printf("Enter value of b : ");
    int b;
    scanf("%d", &b);

    int c = (int)pow(a, b);
    printf("%d", c);

    return 0;
}