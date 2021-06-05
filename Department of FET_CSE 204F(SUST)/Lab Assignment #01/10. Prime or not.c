//Task #10: Write a program to check whether a number is Prime or not.

#include<stdio.h>
int main()
{
    int i, n, flag=0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n < 2)
        flag = 1;

    for(i = 2; i < n; i = i+1)
    {
        if(n%i == 0)
            flag = 1;
    }

    if(flag == 1)
        printf("%d is not a prime number.", n);

    else
        printf("%d is a prime number.", n);

    return 0;
}
