#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("file1.txt", "r");  //fopen() - opens a  file

    if(fp == NULL)
    {
        printf("Error!\n");
        exit(1);
    }

    while((ch = getc(fp)) != EOF) //getc() - reads a character from a file
    {
        printf("%c", ch);
        if(ch == '\n')
            break;
    }

    fclose(fp);   //fclose() - closes a file

    return 0;
}
