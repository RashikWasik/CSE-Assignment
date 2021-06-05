#include<stdio.h>
int main()
{
    int rows, i, spaces, columns, result;

    printf("Enter: ");
    scanf("%d", &rows);

    printf("\n");

    for(i = 0; i <= rows; i = i+1)
    {
        result = 1;
        for(spaces = 1; spaces <= rows-i; spaces = spaces+1)
            printf(" ");

        for(columns = 0; columns <= i; columns = columns+1)
        {
            printf("%d ", result);
            result = result*(i-columns)/(columns+1);
        }

        printf("\n");
    }

    return 0;
}
