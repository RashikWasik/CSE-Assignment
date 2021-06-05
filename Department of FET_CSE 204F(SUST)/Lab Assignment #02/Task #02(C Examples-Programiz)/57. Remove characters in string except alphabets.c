#include <stdio.h>

int main()
{
    int i, n;
    char str[100];

    printf("Enter a string: ");
    gets(str);

    n = strlen(str);

    printf("Output string: ");

    for(i=0; i<n; i=i+1)
    {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            printf("%c",str[i]);

        else
            continue;
    }

    return 0;
}
