#include<stdio.h>
#include<string.h>

int main()
{
    int count = 0;
    char *sub, b[100];

    printf("Enter a string: ");
    gets(sub);

    printf("Enter a string: ");
    gets(b);


    while(sub = strstr(sub, b))
    {
        count = count +1;
        sub = sub +1;
    }

    printf("%d", count);

    return 0;
}

