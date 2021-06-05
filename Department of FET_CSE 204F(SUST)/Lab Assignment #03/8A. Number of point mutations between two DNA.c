// Task #8A: Write a program to find out the number of point mutations between two DNA sequences.

#include <stdio.h>
#include <string.h>

int main()
{
    int i, n1, n2, count = 0;
    char dna1[100], dna2[100];

    printf("Enter first DNA sequence: ");
    gets(dna1);

    printf("Enter second DNA sequence: ");
    gets(dna2);

    n1 = strlen(dna1);
    n2 = strlen(dna2);

    if(n1 == n2)
    {
        for(i=0; i < n1; i = i+1)
        {
            if(dna1[i] != dna2[i])
                count = count+1;
        }

        printf("\nNumber of point mutations between these two DNA sequences = %d\n", count);
    }

    else
    {
        printf("\nThe lengths of DNA sequences aren't same.\n");
    }

    return 0;
}
