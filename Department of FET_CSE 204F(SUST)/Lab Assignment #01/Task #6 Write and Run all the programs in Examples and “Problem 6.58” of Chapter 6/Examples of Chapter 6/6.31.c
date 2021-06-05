// EXAMPLE 6.31 Averaging a List of Nonnegative Numbers

#include <stdio.h>
main()
{
    int n, count, navg = 0;
    float x, average, sum = 0;

    /* initialize and read in a value for n */
    printf("How many numbers? ");
    scanf("%d", &n);
    /* read in the numbers */
    for (count = 1; count <= n; ++count)
    {
        printf ("x = ");
        scanf("%f", &x);
        if (x < 0) continue;
        sum += x;
        ++navg ;
    }

    /* calculate the average and write out the answer */
    average = sum/navg;
    printf("\nThe average is %f\n", average);
}
