//Task #7B: Write a program to calculate the area of a triangle.

#include<stdio.h>

int main()

{
    int base, height;
    float area;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter height: ");
    scanf("%d", &height);

    area = .5*base*height;

    printf("So the area is %0.2f.\n", area);

    return 0;

}


