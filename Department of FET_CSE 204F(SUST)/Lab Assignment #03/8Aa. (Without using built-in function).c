// Task #8A: Write a program to find out the number of point mutations between two DNA sequences.

#include <stdio.h>

int main()
{
    int i, n1, n2, count = 0;
    char dna1[100], dna2[100];

    printf("Enter first DNA sequence: ");
    gets(dna1);

    printf("Enter second DNA sequence: ");
    gets(dna2);

    for (n1 = 0; dna1[n1] != '\0'; n1 = n1+1);
    for (n2 = 0; dna2[n2] != '\0'; n2 = n2+1);

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
