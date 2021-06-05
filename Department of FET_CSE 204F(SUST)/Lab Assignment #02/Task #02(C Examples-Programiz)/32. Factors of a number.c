#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for(i = 1; i <= n; i = i+1)
    {
        if(n%i == 0)
            printf("%d ", i);
    }

    return 0;
}
