// Task #1: Write a program to print an array in reverse orde

#include <stdio.h>

int main()
{
    int i, j, n, a[1000];

    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    printf("\nEnter integers(Use spacebar): ");

    for(i = 0; i < n; i = i+1)
    {
        scanf("%d", &a[i]);
    }

    printf("\nIn reverse order: ");

    for(j = n-1; j >= 0; j = j-1)
    {
        printf("%d ", a[j]);
    }

    printf("\n");

    return 0;
}
