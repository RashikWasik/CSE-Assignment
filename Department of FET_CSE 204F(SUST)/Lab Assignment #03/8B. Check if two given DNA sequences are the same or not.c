// Task #8B: Write a program to check if two given DNA sequences are the same or not

#include <stdio.h>
#include <string.h>

int main()
{
    char dna1[100], dna2[100];

    printf("Enter first DNA sequence: ");
    gets(dna1);

    printf("Enter second DNA sequence: ");
    gets(dna2);

    if (strcmp(dna1, dna2) == 0)
      printf("\nDNA sequences are same.\n");

   else
      printf("\nDNA sequences aren't same.\n");

    return 0;
}
