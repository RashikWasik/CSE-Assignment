//Task #2: Write a program to calculate 1+2+3…..+n = ?

#include <stdio.h>
int main()
{
    int i, n, total=0;

    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i = i+1)
    {
        total = total + i;
    }

    printf("\nSo the total is: %d\n", total);

    return 0;
}
