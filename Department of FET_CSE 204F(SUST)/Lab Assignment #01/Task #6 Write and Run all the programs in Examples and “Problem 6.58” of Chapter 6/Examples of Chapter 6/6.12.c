//EXAMPLE 6.12 Lowercase to Uppercase Text Conversion

/* convert a line of lowercase text to uppercase */
#include <stdio.h>
#include <ctype.h>

#define EOL '\n'

main()
{
    char letter[80];
    int tag, count = -1;

    /* read in the lowercase text */
    do ++count;
    while ((letter[count] = getchar()) != EOL);
    tag = count;

    /* display the uppercase text */
    count = 0;
    do
    {
        putchar(toupper(letter[count]));
        ++count;
    }
    while (count < tag);
}
