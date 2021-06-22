#include <stdio.h>
int main()
{
    int i, n;
    char a[100], b[100];

    printf("Enter string s1 (Before copying): ");
    gets(a);

    //n = strlen(a);
    for (n = 0; a[n] != '\0'; n = n+1);

    for(i=0; i<n; i=i+1)
        b[i] = a[i];

    b[i] = '\0';

    printf("\nString s2 (After copying): %s\n", b);

    return 0;
}
