#include<stdio.h>
int main()
{
    int rows, i, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\n");

    for(i = 1; i <= rows; i = i+1)
    {
        for(columns = 1; columns <= i; columns = columns+1)
            printf("* ");

        printf("\n");
    }

    return 0;
}
