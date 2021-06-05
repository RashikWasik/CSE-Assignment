// EXAMPLE 6.34 Converting Several Lines of Text to Uppercase

#include <stdio.h>
#include <ctype.h>
#define EOL '\n'
main()
{
    char letter[80];
    int tag, count, linecount = 1;
    while ((letter[0] = getchar()) != '*')
    {
        /* read in a line of text */
        for (count = 1; (letter[count] = getchar()) != EOL; ++count)
            ;
        tag = count;
        /* display the line of text */
        for (count = 0; count < tag; ++count)
            putchar(toupper(letter[count]));
        printf("\n\n");
        ++linecount;
        /* test for a break condition */
        for (count=1; count < tag; ++count)
            if (letter[count-1] == '$' && letter[count] == '$')
            {
                printf("BREAK CONDITION DETECTED - TERMINATE EXECUTION\n\n");
                goto end;
            }
    }
end:
    printf("Good bye");
}
