/*4. Write a program to take a string and print the length of
the string, convert the string in upper case, lower case,
reverse case. And also print all the characters of the string.*/

#include <stdio.h>

int main()
{
    int i, j = 0, length;
    char a[100];
    char upper[100], lower[100], reverse[100];

    printf("Enter a string: ");
    gets(a);

    printf("\nThe string is: %s\n", a);

    for (length = 0; a[length] != '\0'; length = length+1);
    printf("\nThe length of the string is: %d\n", length);

    printf("\nThe characters of the string are: ");
    for(i = 0; i < length; i = i+1)
        printf("%c  ",a[i]);

    for(i = length-1; a[i] >= 0; i = i-1)
    {
        reverse[j] = a[i];  // Reverses the string
        j = j + 1;
    }
    printf("\n\nReverse of the string is: %s\n", reverse);

    printf("\nThe uppercase of the string is: ");
    for(i = 0; i < length; i = i+1)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            upper[i] = a[i] - 32;
            printf("%c", upper[i]);
        }

        else
        {
            upper[i] = a[i];
            printf("%c", upper[i]);
        }
    }

    printf("\n\nThe lowercase of the string is: ");
    for(i = 0; i < length; i = i+1)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            lower[i] = a[i] + 32;
            printf("%c", lower[i]);
        }

        else
        {
            lower[i] = a[i];
            printf("%c", lower[i]);
        }
    }

    printf("\n");

    return 0;
}
