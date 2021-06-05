//Task #8B: Write a program to generate the following pattern using *.
//   *
//  ***
// *****
//*******

#include<stdio.h>
int main()

{
    int i, columns, spaces;

    for(i = 1; i <= 4; i = i+1)
    {
        for(spaces = 1; spaces <= 4-i; spaces = spaces+1)
            printf(" ");

        for(columns = 1; columns <= i*2-1; columns = columns + 1)
            printf("*");

        printf("\n");
    }

    return 0;
}
