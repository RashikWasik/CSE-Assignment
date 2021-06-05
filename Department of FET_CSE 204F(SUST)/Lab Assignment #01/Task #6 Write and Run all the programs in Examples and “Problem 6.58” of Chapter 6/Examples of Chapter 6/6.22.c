// EXAMPLE 6.22 Solution of an Algebraic Equation

#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

main()
{
    int flag = TRUE, count = 0;
    float guess, root, test, error;

    /* read input parameters */

    printf ("Initial guess: ");
    scanf ( "%f", &guess);
    while (flag)   /* begin the main loop */
    {
        ++count ;
        if (count == 50) flag = FALSE;
        test = 10. - 3. * guess * guess;
        if (test > 0)   /* another iteration */
        {
            root = pow(test, 0.2);
            printf("\nIteration number: %2d", count);
            printf("   x= %7.5f", root);
            error = fabs(root - guess);
            if (error > 0.00001) guess = root; /* repeat the calculation*/
            else   /* display the final answer */
            {
                flag = FALSE;
                printf("\n\nRoot= %7.5f", root);
                printf ("   No. of iterations= %2d", count) ;
            }
        }
        else   /* error message */
        {
            flag = FALSE;
            printf ("\nNumbers out of range - try another initial guess");
        }
    }
    if ((count == 50) && (error > 0.00001)) /* another error message */
        printf("\n\nConvergence not obtained after 50 iterations");
}
