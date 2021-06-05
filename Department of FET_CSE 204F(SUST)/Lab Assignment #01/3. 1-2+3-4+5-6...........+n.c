/*Task #3: Write a program to calculate 1-2+3-4+5-6…..+n = ?*/

#include <stdio.h>

int main()
{
    int n, total1, total2;

    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n);

    total1 = (n+1)/2;   //If 'n' is odd.
    total2 = (-1)*(n/2);    //If 'n' is even.

    if (n%2 != 0)
        printf("\nThe total is: %d\n", total1);

    else
        printf("\nThe total is: %d\n", total2);

    return 0;
}
