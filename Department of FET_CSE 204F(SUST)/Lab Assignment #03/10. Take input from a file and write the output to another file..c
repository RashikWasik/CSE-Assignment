// Task #10: Write a program to take input from a file and write the output to another file.
// Here I'm gonna take input from file1 and write the output to file2

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("file1.txt", "r"); //fopen() - opens a file
    fp2 = fopen("file2.txt", "w");

    if(fp1 == NULL)
    {
        printf("Error!");
        exit(1);
    }

    while((ch = getc(fp1)) != EOF) //getc() - reads a character from a file
    {
        putc(ch, fp2);  //putc() - writes a character to a file
    }

    printf("Successful!\n");

    fclose(fp1);   //fclose() - closes a file
    fclose(fp2);

    return 0;
}
