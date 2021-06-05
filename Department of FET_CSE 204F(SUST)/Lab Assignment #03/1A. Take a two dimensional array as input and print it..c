// Task #1A: Write a program to take a two dimensional array as input and print it

#include <stdio.h>

int main()
{
    int i, j, m, n;
    int a[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    printf("\n");

    for (i = 0; i < m; i=i+1)
    {
        for (j = 0; j < n; j=j+1)
        {
            printf("Enter array[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe array elements are:\n");

    for (i = 0; i < m; i=i+1)
    {
        for (j = 0; j < n; j=j+1)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
