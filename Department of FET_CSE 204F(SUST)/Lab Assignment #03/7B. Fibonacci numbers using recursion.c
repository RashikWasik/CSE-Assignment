// Task #7B: Write a program to Generate FIbonacci Numbers up to N using recursion.

#include<stdio.h>

int n;
int fibo(n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    else
        return (fibo(n-1) + fibo(n-2));
}

int main()
{
    int N, i;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Fibonacci Series: ");

    for(i = 0; i <= N; i = i+1)
    {
        printf("%d ", fibo(i));
    }

    return 0;
}


