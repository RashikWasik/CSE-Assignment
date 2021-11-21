#include <stdio.h>

typedef struct complex
{
    float real;
    float img;
} c;


c add(c n1, c n2)
{
    c temp;

    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;

    return (temp);
}


int main()
{
    c n1, n2, result;

    printf("For 1st complex number, \n");
    printf("Enter the real part: ");
    scanf("%f", &n1.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &n1.img);

    printf("\nFor 2nd complex number, \n");
    printf("Enter the real part: ");
    scanf("%f", &n2.real);
    printf("Enter the real part: ");
    scanf("%f", &n2.img);

    result = add(n1, n2);

    printf("\nSum = %.1f + %.1fi\n", result.real, result.img);
    
    return 0;
}

