//Task #7C: Write a program to calculate the area of a circle.

#include<stdio.h>

int main()

{
    int rad;
    float pi=3.1416;
    float area;

    printf("Enter radius: ");
    scanf("%d", &rad);


    area = pi*rad*rad;

    printf("So the area is %0.4f.\n", area);

    return 0;

}
