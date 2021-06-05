#include <stdio.h>

main()

{
    int i = 0, x = 0;

    for(i = 1; i < 10; i *= 2)
    {
        x++;
        printf("%d ", x);
    }

    printf("\nx = %d", x);
}
