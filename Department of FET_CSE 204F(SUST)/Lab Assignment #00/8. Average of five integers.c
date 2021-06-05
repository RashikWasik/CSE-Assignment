//Task #8: Write a program to calculate the average of five integer numbers.

#include<stdio.h>

int main()
{
    int a, b, c, d, e;
    float avg;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("Enter third integer: ");
    scanf("%d", &c);
    printf("Enter fourth integer: ");
    scanf("%d", &d);
    printf("Enter fifth integer: ");
    scanf("%d", &e);

    avg = (float)(a+b+c+d+e)/5;            //Type casting

    printf("\nSo the average is: %0.1f\n",avg);

    return 0;
}
