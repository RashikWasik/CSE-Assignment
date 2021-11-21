#include<stdio.h>

int main()
{

    int n, i, a[100];
    int *p = a;

    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    printf("\n");

    for(i=0; i < n; i=i+1)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nYou entered:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", *p);
        p = p+1;
    }

    return 0;
}
