#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];
    char *sub;

    printf("Enter a string: ");
    gets(a);

    printf("Enter substring: ");
    gets(b);

    sub = strstr(a, b);

    if(sub)
    {
        printf("Position of substring is: %d", sub-a);
    }

    else
    {
        printf("Not found");
    }

    return 0;
}
