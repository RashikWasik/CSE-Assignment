// EXAMPLE 6.20 Encoding a String of Characters

#include <stdio.h>
main()
{
    char line[80];
    int count;

    /* read in the entire string */

    printf("Enter a line of text below:\n");
    scanf("%[^\n]", line);

    /* encode each individual character and display it */

    for (count = 0; line[count] != '\0'; ++count)
    {
        if (((line[count] >= '0')&& (line[count] < '9'))||
                ((line[count] >= 'A') && (line[count] < 'Z')) ||
                ((line[count] >= 'a') && (line[count] < 'z')))
            putchar(line[count] + 1);
        else if (line[count] == '9') putchar('0');
        else if (line[count] == 'Z') putchar('A');
        else if (line[count] == 'z') putchar('a');
        else putchar('.');
    }
}
