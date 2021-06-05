// Task #7A: Write a program to find the root of a binomial function (ax^2+bx+c = 0) using function

#include <stdio.h>
#include <math.h>

int a, b, c;
int binomial(a, b, c)
{
    double discriminant, root1, root2, real, imaginary;

    discriminant = pow(b,2) - 4*a*c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);

        printf("\nx1 = %.2f \n", root1);
        printf("x2 = %.2f \n", root2);
    }

    else if (discriminant == 0)
    {
        root1 = (double)-b/(2*a);
        root2 = (double)-b/(2*a);

        printf("\nx1 = %.2f \n", root1);
        printf("x2 = %.2f \n", root2);
    }

    else
    {
        real = (double)-b/(2*a);
        imaginary = sqrt(-discriminant)/(2*a);

        printf("\nx1 = %.2f + %.2fi \n", real, imaginary);
        printf("x2 = %.2f - %.2fi \n", real, imaginary);
    }
}


int main()
{
    int x, y, z; // declare variables x, y and z

    printf("Coefficient of x^2: ");
    scanf("%d", &x);

    printf("Coefficient of x: ");
    scanf("%d", &y);

    printf("Constant term: ");
    scanf("%d", &z);

    binomial(x, y, z);

    return 0;
}
