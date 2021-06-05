#include<stdio.h>
int main()
{
    int rows, i, spaces, columns;
    int number = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\n");

    for(i = 1; i <= rows; i = i+1)
    {
        for(columns = 1; columns <= i; columns = columns+1)

            {
                 printf("%d ", number);
                 number = number+1;
            }

        for(spaces = 1; spaces <= rows-i; spaces = spaces+1)
            printf(" ");

        printf("\n");
    }

    return 0;
}
