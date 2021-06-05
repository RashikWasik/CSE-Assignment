#include <stdio.h>
int main()
{
    int i, n;
    char a[100], b[100];

    printf("Enter string s1: ");
    gets(a);

    n = strlen(a);

    for(i=0; i<n; i=i+1)
        b[i] = a[i];

    printf("\nString s2: %s\n", b);

    return 0;
}
