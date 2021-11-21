#include<stdio.h>
#include<math.h>

int m;
int isPrime(m)  // Function to check prime number
{
    int i = 0, flag = 0;

    if(m < 2)
        flag = 1;

    for(i = 2; i < m; i = i+1)
    {
        if(m%i == 0)
            flag = 1;
    }

    return flag;
}

int n;
int isArmstrong(n)  // Function to check armstrong number
{
    int number, remainder, total = 0, i = 0, flag;

    number = n;

    while (number != 0)
    {
        number = number/10;   //How many digits are there
        i = i+1;
    }

    number = n;

    while (number != 0)
    {
        remainder = number%10;
        total = total + pow(remainder, i);
        number = number/10;
    }

    if(total == n)
        flag = 1;

    else
        flag = 0;

    return flag;
}

int main()
{
    int a, i, flag;

    printf("Enter a positive integer: ");
    scanf("%d", &a);



    flag = isPrime(a);

    if(flag != 1)
    {
        printf("\n%d is a prime number.", a);
    }

    else
    {
        printf("\n%d is not a prime number.", a);
    }



    flag = isArmstrong(a);

    if(flag == 1)
    {
        printf("\n%d is an Armstrong number.", a);
    }

    else
    {
        printf("\n%d is not an Armstrong number.", a);
    }

    printf("\n");

    return 0;
}
