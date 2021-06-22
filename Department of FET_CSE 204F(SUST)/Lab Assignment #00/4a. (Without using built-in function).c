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


    printf("\n\nReverse of the string is: ");
    for(i = length-1; i >= 0; i = i-1)   // Reverses the string
    {
        printf("%c", a[i]);
    }


    for(i = 0; i < length; i = i+1)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
            upper[i] = a[i] - 32;

        else
            upper[i] = a[i];
    }

    upper[i] = '\0';

    printf("\n\nThe uppercase of the string is: %s\n", upper);


    for(i = 0; i < length; i = i+1)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            lower[i] = a[i] + 32;

        else
            lower[i] = a[i];
    }

    lower[i] = '\0';

    printf("\nThe lowercase of the string is: %s\n", lower);

    return 0;
}
