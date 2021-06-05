#include <stdio.h>

int main()
{
    char c;

    for (c = 'A'; c <= 'Z'; c = c+1)
        printf("%c ", c);

    return 0;
}
