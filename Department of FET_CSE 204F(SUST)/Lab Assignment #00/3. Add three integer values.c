//Task #3: Write a program to add three integer values and print the result.

#include<stdio.h>

int main()

{
    int a, b, c, total;

    printf("Enter first integer: ");
    scanf("%d",&a);

    printf("Enter second integer: ");
    scanf("%d",&b);

    printf("Enter third integer: ");
    scanf("%d",&c);

    total=a+b+c;

    printf("\nThe total of three integers are: %d\n",total);

    return 0;

}
