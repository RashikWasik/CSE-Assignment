//EXAMPLE 6.17 Averaging a List of Numbers

/* calculate the average of n numbers */
#include <stdio.h>
main()
{
    int n, count;
    float x, average, sum = 0;
    /* initialize and read in a value for n */
    printf("How many numbers? ");
    scanf ( "%d", &n);

    /* read in the numbers */
    for (count = 1; count <= n; ++count)
    {
        printf("x = ");
        scanf ( "%f" , &x) ;
                sum += x;
    }
    /* calculate the average and display the answer */
    average = sum/n;
    printf("\nThe average is %f\n", average);
}
