#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen(__FILE__,"r");

    if(fp == NULL)
    {
        printf("Error!\n");
        exit(1);
    }

    while(( ch = getc(fp)) != EOF)
    {
        printf("%c",ch);
    }

    fclose(fp);

    return 0;
}
