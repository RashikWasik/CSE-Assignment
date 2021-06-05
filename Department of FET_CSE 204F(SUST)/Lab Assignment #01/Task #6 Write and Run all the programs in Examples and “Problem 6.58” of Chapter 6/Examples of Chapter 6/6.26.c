// EXAMPLE 6.26 Calculating Depreciation

#include <stdio.h>
main( )
{
    int n, year, choice = 0;
    float val, tag, deprec;
    while (choice != 4)
    {
        /* read input data */
        printf("\nMethod: (1-SL 2-DDB 3-SYD 4-End) ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 3)
        {
            printf("Original value: ");
            scanf ("%f", &val) ;
            printf ("Number of years: ") ;
            scanf ( "%n", &n) ;
        }
        switch (choice)
        {
        case 1: /* straight-line method */
            printf("\nStraight-Line Method\n\n");
            deprec = val/n;
            for (year = 1; year <= n; ++year)
            {
                val -= deprec;
                printf("End of Year %2d", year);
                printf(" Depreciation: %7.2f", deprec);
                printf(" Current Value: %8.2f\n", val);
            }
            break;
        case 2: /* double-declining-balance method */
            printf("\nDouble-Declining-Balance Method\n\n");
            for (year = 1; year <= n; ++year)
            {
                deprec = 2*val/n;
                val -= deprec;
                printf ("End of Year %2d", year);
                printf(" Depreciation: %7.2f", deprec);
                printf (" Current Value: %8.2f\n", val);
            }
            break;
        case 3: /* sum-of-the-years'-digits method */
            printf("\nSum-Of-The-Years\'-DigitsMethod\n\n");
            tag = val;
            for (year = 1; year <= n; ++year)
            {
                deprec = (n-year+1)*tag / (n*(n+1)/2);
                val -= deprec;
                printf("End of Year %2d", year);
                printf(" Depreciation: %7.2f", deprec);
                printf(" Current Value: %8.2f\n", val);
            }
            break;
        case 4: /* end of computation */
            printf("\nGoodbye, have a nice day!\n");
            break;

        default : /* generate error message */
            printf("\nIncorrect data entry - please try again\n");
        } /* end switch */
    } /* end while */
}
