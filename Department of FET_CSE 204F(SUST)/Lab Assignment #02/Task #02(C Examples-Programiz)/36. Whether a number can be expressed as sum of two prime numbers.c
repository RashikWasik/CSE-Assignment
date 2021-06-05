#include<stdio.h>

int n;
int isPrime(n)
{
    int j = 0, flag = 0;

    if(n < 2)
        flag = 1;

    for(j = 2; j < n; j = j+1)
    {
        if(n%j == 0)
            flag = 1;
    }

    return flag;
}


int main()
{
    int a, i, flag;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    for(i = 2; i <= a/2; i = i+1)
    {
        flag = isPrime(i);

        if(flag != 1)
        {
            flag = isPrime(a-i);
            if(flag != 1)
                printf("%d = %d + %d\n", a, i, a-i);
        }
    }

    printf("\n");

    return 0;
}


