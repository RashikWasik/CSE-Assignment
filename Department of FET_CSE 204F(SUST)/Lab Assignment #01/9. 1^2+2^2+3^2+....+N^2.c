//Task #9: Write a program to calculate 1^2+2^2+3^2+....+N^2 = ?

#include <stdio.h>
int main()
{
    int i, n, total=0;

    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i = i+1)
    {
        total = total + (i*i);
    }

    printf("\nSo the total is: %d\n", total);

    return 0;
}
