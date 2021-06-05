// EXAMPLE 6.32: Searching for Palindromes

#include <stdio.h>
#include <ctype.h>

#define EOL '\n'
#define TRUE 1
#define FALSE 0

main()
{
    char letter[80];
    int tag, count, countback, flag, loop = TRUE;

    /* main loop */

    while (loop)
    {
        flag = TRUE;

        /* read the text */

        printf("Please enter a word, phrase or sentence below:\n");
        for (count = 0; (letter[count] = getchar()) != EOL; ++count)
            ;
        if ((toupper(letter[0]) == 'E') && (toupper(letter[1]) == 'N') &&
                (toupper(letter[2]) == 'D')) break;
        tag = count - 1;
        /* carry out the search */
        for ((count = 0, countback = tag); count <= tag/2;
                (++count, --countback))
        {
            if (letter[count] != letter[countback])
            {
                flag = FALSE;
                break;
            }
        }

        /* display message */

        for (count = 0; count <= tag; ++count)
            putchar(letter[count]);
        if (flag) printf(" IS a palindrome\n\n");
        else printf(" is NOT a palindrome\n\n");
    }
}
