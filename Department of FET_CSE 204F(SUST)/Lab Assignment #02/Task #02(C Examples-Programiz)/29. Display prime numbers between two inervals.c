#include <stdio.h>

int main()
{
    int a, b, i;

    printf("Enter intervals(Use spacebar): ");
    scanf("%d %d", &a, &b);

    printf("Armstrong numbers between %d and %d are: ", a, b);

    for(i = a; i<= b; i = i+1)
    {
        int j, flag=0;

        if(i < 2)
            flag = 1;

        for(j = 2; j < i; j = j+1)
        {
            if(i%j == 0)
                flag = 1;
        }

        if(flag != 1)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
