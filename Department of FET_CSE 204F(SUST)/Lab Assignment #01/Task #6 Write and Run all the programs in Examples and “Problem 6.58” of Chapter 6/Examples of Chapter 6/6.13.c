//EXAMPLE 6.13 Averaging a List of Numbers

/* calculate the average of n numbers */
#include <stdio.h>
main ()

{
    int n, count = 1;
    float x, average, sum = 0;

    /* initialize and read in a value for n */
    printf ("How many numbers? ");
    scanf ("%d", &n);

    /* read in the numbers */
    do
    {
        printf("x = ");
        scanf("%f", &x);
        sum += x;
        ++count;
    }
    while (count <= n);
    /* calculate the average and display the answer */
    average = sum/n;
    printf ( "\nThe average is %f\n", average);
}
