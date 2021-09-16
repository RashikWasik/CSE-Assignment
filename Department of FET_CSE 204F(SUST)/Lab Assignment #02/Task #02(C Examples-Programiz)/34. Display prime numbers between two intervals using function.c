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
    int a, b, i, result;

    printf("Enter intervals(Use spacebar): ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d are: ", a, b);

    for(i = a; i <= b; i = i+1)
    {
        result = isPrime(i);

        if(result != 1)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
