// Task #9: Write a program to calculate 1^2+2^2+3^2+....+N^2 = ? using function.

#include<stdio.h>

int n;
int series(n)
{
    int i, total = 0;


    for(i = 1; i <= n; i = i+1)
    {
        total = total + (i*i);
    }

    return total;
}


int main()
{
    int a;

    printf("Enter how many numbers you want to add: ");
    scanf("%d", &a);

    printf("\nThe total is: %d\n", series(a));

    return 0;
}
