// Task #2: Write a program to add and subtract two matrices.

#include <stdio.h>

int main()
{
    int i, j, m, n, a[100][100], b[100][100], result[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);


    printf("\nEnter the elements of first matrix(Use spacebar to seperate the elements of a row):\n");

    for (i = 0; i < m; i = i+1)
    {
        printf("Enter the elements of row %d: ", i+1);
        for (j = 0; j < n; j = j+1)
        {
            scanf("%d", &a[i][j]);
        }

    }


    printf("\nEnter the elements of second matrix(Use spacebar to seperate the elements of a row):\n");

    for (i = 0; i < m; i = i+1)
    {
        printf("Enter the elements of row %d: ", i+1);
        for (j = 0; j < n; j = j+1)
        {
            scanf("%d", &b[i][j]);
        }

    }


    printf("\nSum of entered matrices:\n");

    for (i = 0; i < m; i = i+1)
    {
        for (j = 0 ; j < n; j = j+1)
        {
            result[i][j] = a[i][j] + b[i][j];
            printf("%d   ", result[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of entered matrices:\n");

    for (i = 0; i < m; i = i+1)
    {
        for (j = 0 ; j < n; j = j+1)
        {
            result[i][j] = a[i][j] - b[i][j];
            printf("%d   ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
