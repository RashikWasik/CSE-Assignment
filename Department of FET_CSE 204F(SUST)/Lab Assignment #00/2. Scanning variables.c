//Task #2: Write a program to scan the variables you declared in Task #1 and print them.

#include<stdio.h>
int main()

{
    int i1, i2;

    printf("Enter first integer: ");
    scanf("%d",&i1);
    printf("Enter second integer: ");
    scanf("%d",&i2);

    float f1, f2;
    printf("Enter first floating number: ");
    scanf("%f",&f1);
    printf("Enter second floating number: ");
    scanf("%f",&f2);

    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%s",s1);
    printf("Enter second string: ");
    scanf("%s",s2);

    printf("\nThe two integer type variables are %d and %d.\n", i1,i2);
    printf("The two floating type variables are %f and %f.\n", f1,f2);
    printf("The two string type variables are %s and %s.\n", s1,s2);


    return 0;
}
