#include<stdio.h>

int main()
{
    char a[100], b[100];
    int i=0, m, n;

    printf("Enter the first string: ");
    gets(a);

    printf("Enter the second string: ");
    gets(b);

    for (m = 0; a[m] != '\0'; m = m+1);
    for (n = 0; b[n] != '\0'; n = n+1);

    a[m+1]=' ';

    for(i=0; i < n; i=i+1)
    {
        a[m+i+1]=b[i];
    }

    printf("\nAfter concatenation: ");

    for(i=0; i < m+n+1; i=i+1)
    {
        printf("%c", a[i]);
    }

    printf("\n");

    return 0;
}
