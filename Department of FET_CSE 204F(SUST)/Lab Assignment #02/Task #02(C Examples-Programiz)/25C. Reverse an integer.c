// Taking input as a string

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];

    printf("Enter a string: ");
    gets(a);

        printf("Reverse of the number is = %s", strrev(a));

    return 0;
}
