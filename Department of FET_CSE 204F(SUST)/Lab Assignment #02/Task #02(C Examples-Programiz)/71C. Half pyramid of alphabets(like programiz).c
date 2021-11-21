#include<stdio.h>

int main()
{
    int rows, i;
    char columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\n");

    for(i = 1; i <= rows; i = i+1)
    {
        for(columns = 1; columns <= i; columns = columns+1)  // ASCII value of A = 65 and Z = 90.
            printf("%c ", 64+i);

        printf("\n");
    }

    return 0;
}
