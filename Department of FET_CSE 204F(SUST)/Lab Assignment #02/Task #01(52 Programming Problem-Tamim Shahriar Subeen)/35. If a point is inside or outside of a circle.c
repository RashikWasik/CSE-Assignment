#include <stdio.h>
#include <math.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 1; i <= T; i = i+1)
    {
        double Xc, Yc, r, X, Y, distance;

        scanf("%lf %lf", &Xc, &Yc);

        scanf("%lf", &r);

        scanf("%lf %lf", &X, &Y);

        distance = sqrt(pow((Xc - X),2) + pow((Yc - Y),2));

        if(distance < r)
        {
            printf("The point is inside the circle\n\n");
        }

        else if(distance > r)
        {
            printf("The point is not inside the circle\n\n");
        }

        else
        {
            printf("The point is on the circle\n\n");
        }
    }

    return 0;
}
