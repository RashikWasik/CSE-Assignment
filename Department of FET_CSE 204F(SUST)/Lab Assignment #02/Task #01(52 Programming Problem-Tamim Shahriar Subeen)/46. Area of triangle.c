#include <stdio.h>
#include <math.h>

int main()

{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        double a, b, c, s, area;

        scanf("%lf %lf %lf", &a, &b, &c);

        s = (a + b +c)/2;

        area = sqrt(s*(s-a)*(s-b)*(s-c));

        printf("%.3lf\n", area);
    }

    return 0;
}
