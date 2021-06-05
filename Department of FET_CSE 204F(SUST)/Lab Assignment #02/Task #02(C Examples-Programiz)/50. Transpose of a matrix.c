#include <stdio.h>

int main()
{
    int i, j, m, n, a[100][100], b[100][100];

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);


    printf("\nEnter the elements of the matrix(Use spacebar to seperate the elements of a row):\n");

    for (i = 0; i < m; i = i+1)
    {
        printf("Enter the elements of row %d: ", i+1);
        for (j = 0; j < n; j = j+1)
        {
            scanf("%d", &a[i][j]);
        }

    }


    for (i = 0; i < m; i = i+1)
    {
        for (j = 0; j < n; j = j+1)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");

    for (i = 0; i < n; i = i+1)
    {
        for (j = 0 ; j < m; j = j+1)
        {
            printf("%d   ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
