#include <stdio.h>

int main()
{
    char a;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &a);

    printf("Enter first operand: ");
    scanf("%lf", &n1);

    printf("Enter second operand: ");
    scanf("%lf", &n2);

    switch(a)
    {
    case '+':
        printf("\n%.2lf\n", n1+n2);
        break;

    case '-':
        printf("\n%.2lf\n", n1-n2);
        break;

    case '*':
        printf("\n%.2lf\n", n1*n2);
        break;

    case '/':
        printf("\n%.2lf\n", n1/n2);
        break;

    // If 'a' doesn't match any case constant +, -, *, /
    default:
        printf("\nError! operator is not correct\n");
    }

    return 0;
}
