#include <stdio.h>

int main()
{
    int n=100;

    do
    {
        printf("%d\n", n);
        n = n-1;
    }
    while(n >= 1);

    return 0;
}
