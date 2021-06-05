//Task #7A: Write a program to calculate the area of a rectangle.

#include<stdio.h>

int main()

{
    int length, width, area;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    area = length*width;

    printf("\nSo the area is %d.\n", area);

    return 0;

}
