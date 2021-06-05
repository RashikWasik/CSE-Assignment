#include<stdio.h>

int n;
int series(n)
{
    if(n == 0)
        return n;

    else
        return n + series(n - 1);
}


int main()
{
    int a;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    printf("\nSum = %d\n", series(a));

    return 0;
}
