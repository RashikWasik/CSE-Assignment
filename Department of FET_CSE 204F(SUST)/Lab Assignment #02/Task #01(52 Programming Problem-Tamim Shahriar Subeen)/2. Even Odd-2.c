#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        char n[101], a;

        scanf(" %[^\n]", &n);

        a = n[strlen(n)-1];  // Getting the last character

        if (a%2 != 0)
            printf("odd\n");

        else
            printf("even\n");
    }

    return 0;
}
