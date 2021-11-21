// I'm gonna write "Hi, I am Rashik Wasik" in file2

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char str[1000];

    fp = fopen("file2.txt", "w");  //fopen() - opens a  file

    if(fp == NULL)
    {
        printf("Error!\n");
        exit(1);
    }

    printf("Enter your string: ");
    gets(str);

    fputs(str, fp);

    fclose(fp);

    return 0;
}
