#include <stdio.h>
#include <math.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i=i+1)
    {
        int N;
        float a, b;

        scanf("%d", &N) ;

        a = sqrt(N);
        b = (int)a;

        if (a == b)
            printf("Yes\n") ;
        else
            printf("No\n") ;
    }

    return 0;
}
