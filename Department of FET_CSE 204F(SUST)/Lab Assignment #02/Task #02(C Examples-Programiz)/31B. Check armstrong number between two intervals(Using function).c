#include<stdio.h>
#include<math.h>

int n;
int isArmstrong(n)
{
    int number, remainder, total = 0, j = 0, flag;

    number = n;


    while (number != 0)
    {
        number = number/10;   //How many digits are there
        j = j+1;
    }

    number = n;

    while (number != 0)
    {
        remainder = number%10;
        total = total + pow(remainder, j);
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
    int a, b, i, flag;

    printf("Enter intervals(Use spacebar): ");
    scanf("%d %d", &a, &b);

    printf("Armstrong numbers between %d and %d are: ", a, b);

    for(i = a; i <= b; i = i+1)
    {
        flag = isArmstrong(i);

        if(flag == 1)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}


