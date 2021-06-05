/*Task #7B: Write a program to Generate fibonacci numbers up no N.*/

#include <stdio.h>

int main()
{
    int n, i, a, first, second;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    first = 1;
    second = 1;

    printf("The fibonacci numbers are: ");

    for(i = 1; i <= n; i = i+1)
    {
        printf("%d  ", first);
        a = first;
        first = second;
        second = a + second;
    }

    return 0;
}
