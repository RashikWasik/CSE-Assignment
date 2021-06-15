#include <stdio.h>
#include <math.h>

int main()
{
    int n, number, remainder, total = 0, i = 0 ;

    printf("Enter an integer: ");
    scanf("%d", &n);

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
        printf("%d is an Armstrong number.", n);

    else
        printf("%d is not an Armstrong number.", n);

    printf("\n");

    return 0;
}
