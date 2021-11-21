#include<stdio.h>

int main()
{
    int rows, i, spaces, columns;
    int a = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\n");

    for(i = 1; i <= rows; i = i+1)
    {
        for(spaces = 1; spaces <= rows-i; spaces = spaces+1)
            printf("  ");

        for(columns = 1; columns <= i; columns = columns+1)
        {
            a = a+1;
            printf("%d ", a);
        }

        for(columns = 1; columns <= i-1; columns = columns+1)
        {
            a = a-1;
            printf("%d ", a);
        }

        printf("\n");
    }

    return 0;
}
