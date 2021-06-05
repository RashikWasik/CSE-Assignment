/*Task #1: Write a program to assign some values to two integer type variables,
two floating type variables, two string type variables print them.*/


#include<stdio.h>

int main()
{
    int i1, i2;
    i1=89;
    i2=5;
    printf("The two integer type variables are %d and %d.\n", i1, i2);

    float f1, f2;
    f1=4.268;
    f2=6.8153;
    printf("The two floating type variables are %f and %f.\n", f1, f2);

    char s1[100]="Rashik", s2[100]="Wasik";
    printf("The two string type variables are %s and %s.\n", s1, s2);


    return 0;
}
