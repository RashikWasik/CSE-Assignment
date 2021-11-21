#include <stdio.h>
#include <string.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        char sentence[100];
        char str[20];
        int j = 0, k = 0, n;

        scanf(" %[^\n]", sentence);

        for (n = 0; sentence[n] != '\0'; n = n+1);
        //n = strlen(sentence);

        for(j = 0; j < n; j = j+1)
        {
            if (sentence[j] != ' ')  // Encountering space means the word have been gotten
            {
                str[k] = sentence[j];
                k = k+1;
            }

            else
            {
                str[k] = '\0';
                printf("%s", strrev(str));  // Reversing and printing the word
                printf(" ");
                k = 0;
            }
        }

        str[k] = '\0';
        //Reversing and printing last word
        printf("%s", strrev(str));

        printf("\n\n");
    }

    return 0;
}
