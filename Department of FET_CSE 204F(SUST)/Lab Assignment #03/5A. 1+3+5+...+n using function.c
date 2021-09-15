// Task #5 Write a program to calculate 1+3+5+...+n = ? using function.

#include<stdio.h>

int n;
int series(n)
{
    int i, total = 0;

    for(i = 1; i <= n; i = i+2)
    {
        total = total + i;
    }

    return total;
}


int main()
{
    int a;

    printf("Enter the value of 'n': ");
    scanf("%d", &a);

    printf("\nThe total is: %d\n", series(a));

    return 0;
}
