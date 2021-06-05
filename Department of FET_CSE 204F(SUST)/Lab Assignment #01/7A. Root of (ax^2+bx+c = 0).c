//Task #7A: Write a program to find the root of a binomial function (ax^2+bx+c = 0)


#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float discriminant, root1, root2;
    float real, imaginary;

    printf("Coefficient of x^2: ");
    scanf("%f", &a);

    printf("Coefficient of x: ");
    scanf("%f", &b);

    printf("Constant term: ");
    scanf("%f", &c);

    discriminant = pow(b,2) - 4*a*c;

    if(discriminant > 0)  // b^2-4ac > 0
    {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);

        printf("\nx1 = %.2f \n", root1);
        printf("x2 = %.2f \n", root2);

    }

    else if (discriminant == 0)// b^2-4ac = 0
    {
        root1 = -b/(2*a);
        root2 = -b/(2*a);

        printf("\nx1 = %.2f \n", root1);
        printf("x2 = %.2f \n", root2);
    }

    else          // b^2-4ac < 0
    {
        real = -b/(2*a);
        imaginary = sqrt(-discriminant)/(2*a);

        printf("\nx1 = %.2f + %.2fi \n", real, imaginary);
        printf("x2 = %.2f - %.2fi \n", real, imaginary);

    }

    return 0;
}
