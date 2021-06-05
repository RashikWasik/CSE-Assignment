//Task #5: Write a program to calculate 1+3+5+...+n = ?

#include <stdio.h>
int main()
{
    int i, n, total=0;

    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n);

    for(i = 1; i <= n*2; i = i+2)
    {
        total = total + i;
    }

    printf("\nSo the total is: %d\n", total);

    return 0;
}
