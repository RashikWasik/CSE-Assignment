// Task #8B: Write a program to check if two given DNA sequences are the same or not

#include <stdio.h>

int main()
{
    char dna1[100], dna2[100];
    int i,n1, n2,flag = 0;

    printf("Enter first DNA sequence: ");
    gets(dna1);

    printf("Enter second DNA sequence: ");
    gets(dna2);

    for (n1 = 0; dna1[n1] != '\0'; n1 = n1+1);
    for (n2 = 0; dna2[n2] != '\0'; n2 = n2+1);

    if(n1 == n2)
    {
        for(i=0; i < n1; i = i+1)

            if(dna1[i] != dna2[i])
            {
                flag = 1;
                break;
            }

    }

    else
        flag = 1;


    if(flag == 1)
        printf("nDNA sequences aren't same.\n");

    else
        printf("\nDNA sequences are same.\n");

    return 0;
}
