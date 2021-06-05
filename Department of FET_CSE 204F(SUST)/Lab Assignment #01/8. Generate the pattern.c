//Task #8: Write a program to generate the following pattern using *.
//********
//********
//********

#include<stdio.h>

int main()

{
    int i, columns;

    for(i = 1; i <= 3; i = i+1)
    {
        for(columns = 1; columns <= 8 ; columns = columns+1)
            printf("*");

        printf("\n");
    }

    return 0;
}

