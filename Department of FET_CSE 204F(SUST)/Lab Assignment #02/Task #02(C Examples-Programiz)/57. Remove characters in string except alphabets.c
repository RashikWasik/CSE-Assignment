#include <stdio.h>

int main()
{
    int i, n;
    char str[100];

    printf("Enter a string: ");
    gets(str);

    //n = strlen(a);
    for (n = 0; str[n] != '\0'; n = n+1);

    printf("\nOutput string: ");

    for(i = 0; i < n; i = i+1)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            printf("%c", str[i]);

        else
            continue;
    }

    printf("\n");

    return 0;
}
