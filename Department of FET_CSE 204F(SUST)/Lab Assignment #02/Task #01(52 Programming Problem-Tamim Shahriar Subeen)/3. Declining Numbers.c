#include <stdio.h>

int main()

{
    int i;

    for(i=1000; i>=1; i=i-1)
    {
        if(i%5 == 0)
            printf("\n");

        printf("%d\t", i);


    }

    return 0;
}
