#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i;

    printf("Enter intervals(Use spacebar): ");
    scanf("%d %d", &a, &b);

    printf("Armstrong numbers between %d and %d are: ", a, b);

    for(i = a; i<= b; i = i+1)
    {
        int number, remainder, total = 0, j = 0 ;

        number = i;

        while (number != 0)
        {
            number = number/10;   //How many digits are there
            j = j+1;
        }

        number = i;

        while (number != 0)
        {
            remainder = number%10;
            total = total + pow(remainder, j);
            number = number/10;
        }

        if(total == i)
            printf("%d ", i);

        else
            continue;
    }

    printf("\n");

    return 0;
}
