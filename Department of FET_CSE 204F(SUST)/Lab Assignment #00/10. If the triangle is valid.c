/*Task #10: Write a program to input side of a triangle and check whether triangle is valid or not using if else.*/

#include<stdio.h>
int main()

{
    int a, b, c;

    printf("Enter the length of first side: ");
    scanf("%d", &a);

    printf("Enter the length of second side: ");
    scanf("%d", &b);

    printf("Enter the length of third side: ");
    scanf("%d", &c);

    if (a+b > c  &&  a+c > b  &&  b+c > a)
        printf("\nTriangle is valid.\n");

    else
        printf("\nTriangle is not valid.\n");


    return 0;
}
