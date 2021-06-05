#include <stdio.h>

int main()
{

    int a, b, c=1;

    printf("Enter two positive integers(Use spacebar): ");
    scanf("%d %d", &a, &b);

    while(1)
    {
        if(c%a==0 && c%b==0)
        {
            printf("The LCM of %d and %d is %d.\n", a, b, c);
            break;
        }

        c = c+1;
    }


    return 0;
}
