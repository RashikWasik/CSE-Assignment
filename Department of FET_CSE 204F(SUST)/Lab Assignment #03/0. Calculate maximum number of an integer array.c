// Task #0: Write a c program to calculate the maximum number of an integer array

#include <stdio.h>

int main()
{
    int i, j, n, a[1000];

    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    for(i = 0; i < n; i = i+1)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(j = 1; j < n; j = j+1)
    {
        if(a[0] < a[j])
        {
            a[0] = a[j];
        }

    }

    printf("\nLargest number = %d\n", a[0]);
    return 0;
}
