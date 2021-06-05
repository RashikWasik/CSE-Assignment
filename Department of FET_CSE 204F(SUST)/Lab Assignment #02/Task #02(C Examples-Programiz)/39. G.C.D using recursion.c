#include<stdio.h>

int m, n;
int gcd(m, n)
{
    if(n == 0)
        return m;

    else
        return gcd(n, m%n);
}


int main()
{
    int a, b;

    printf("Enter two positive integers(Use spacebar): ");
    scanf("%d %d", &a, &b);

    printf("\nG.C.D of %d and %d is %d\n", a, b, gcd(a, b));

    return 0;
}
