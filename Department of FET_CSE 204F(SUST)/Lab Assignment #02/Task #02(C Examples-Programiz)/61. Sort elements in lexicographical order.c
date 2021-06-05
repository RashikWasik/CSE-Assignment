#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char str[100][100], temp[100];

    printf("How many words you want to enter: ");
    scanf("%d",&n);

    printf("\nEnter words:\n");

    for(i = 0; i < n; i = i+1)
        scanf(" %[^\n]", str[i]);

    for(i = 0; i < n; i = i+1)
    {
        for(j = i+1; j < n ; j = j+1)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nIn lexicographical order:");

    for(i = 0; i < n; i = i+1)
    {
        printf ("\n%s", str[i]);
    }

    return 0;
}
