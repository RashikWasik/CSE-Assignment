/*4. Write a program to take a string and print the length of
the string, convert the string in upper case, lower case,
reverse case. And also print all the characters of the string.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, n;
    char a[100];

    printf("Enter a string: ");
    gets(a);

    n = strlen(a);

    printf("The string is: %s\n", a);

    printf("The length of the string is: %d\n", n);

    printf("The characters of the string are: ");
    for(i=0; i<n; i=i+1)
        printf("%c  ",a[i]);

    printf("\nReverse of the string is: %s\n", strrev(a));

    strrev(a);
    printf("The uppercase of the string is: %s\n", strupr(a));

    printf("The lowercase of the string is: %s\n", strlwr(a));

    return 0;
}
