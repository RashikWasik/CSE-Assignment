//EXAMPLE 6.16 Lowercase to Uppercase Text Conversion

/* convert a line of lowercase text to uppercase */
#include <stdio.h>
#include <ctype.h>
#define EOL '\n'
main()
{
    char letter[80];
    int tag, count;
    /* read in the lowercase text */
    for (count = 0; (letter[count] = getchar()) != EOL; ++count)
        ;
    tag = count;
    /* display the uppercase text */
    for (count = 0; count < tag; ++count)
        putchar(toupper(letter[count]));
}
