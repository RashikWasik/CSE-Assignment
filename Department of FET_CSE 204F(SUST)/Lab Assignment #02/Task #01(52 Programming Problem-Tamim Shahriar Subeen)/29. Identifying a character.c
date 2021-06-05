#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        char ch[2];

        scanf(" %[^\n]", &ch);

        if (ch[0] >= 'a' && ch[0] <= 'z')
        {
            printf("Lowercase character\n");
        }

        else if (ch[0] >= 'A' && ch[0] <= 'Z')
        {
            printf("Uppercase character\n");
        }

        else if (ch[0] >= '0' && ch[0] <= '9')
        {
            printf("Numerical Digit\n");
        }

        else
        {
            printf("Special character\n");
        }
    }

    return 0;
}
