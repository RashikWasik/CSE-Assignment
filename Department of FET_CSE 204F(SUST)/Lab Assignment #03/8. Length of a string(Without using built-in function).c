// Task #8: Write a program to take input of a string and find the length of that string.

#include <stdio.h>

int main()
{
    int n;
    char str[100];

    printf("Enter a string: ");
    gets(str);

    for (n = 0; str[n] != '\0'; n = n+1);

    printf("\nThe length of the string = %d\n", n);

    return 0;
}
