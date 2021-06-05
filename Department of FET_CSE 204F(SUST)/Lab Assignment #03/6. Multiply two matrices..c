// Task #6: Write a program that can multiply two matrices.

#include <stdio.h>

int main()
{
    int i, j, k;
    int m, n, p, q;
    int a[10][10], b[10][10], sum = 0, result[10][10];

    printf("Enter the number of rows of first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns of first matrix: ");
    scanf("%d", &n);

    printf("\nEnter the number of rows of second matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns of second matrix: ");
    scanf("%d", &q);


    if (n != p)
        printf("\nThe multiplication isn't possible.\n");


    else
    {
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

        for (i = 0; i < p; i = i+1)
        {
            printf("Enter the elements of row %d: ", i+1);

            for (j = 0; j < q; j = j+1)
            {
                scanf("%d", &b[i][j]);
            }

        }


        for (i = 0; i < m; i = i+1)
        {
            for (j = 0; j < q; j = j+1)
            {
                for (k = 0; k < p; k = k+1)
                {
                    sum = sum + a[i][k] * b[k][j];
                }

                result[i][j] = sum;
                sum = 0;
            }
        }


        printf("\nMultiplication of the matrices:\n");

        for (i = 0; i < m; i = i+1)
        {
            for (j = 0; j < q; j = j+1)
            {
                printf("%d   ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
