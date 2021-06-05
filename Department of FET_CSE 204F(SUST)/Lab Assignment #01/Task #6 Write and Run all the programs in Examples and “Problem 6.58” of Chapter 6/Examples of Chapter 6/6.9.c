// EXAMPLE 6.9 Lowercase to Uppercase Text Conversion

/* convert a line of lowercase text to uppercase */

#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

main ( )
{
    char letter[80];
    int tag, count = 0;

    /* read in the lowercase text */
    while ((letter[count] = getchar()) != EOL) ++count;
    tag = count;
    /* display the uppercase text */
    count = 0;
    while (count < tag)
    {
        putchar(toupper(letter[count]));
        ++count;
    }
}
