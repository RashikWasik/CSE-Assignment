#include <stdio.h>

struct student
{
    char name[50];
    float marks;
} s[100];


int main()
{
    int i, n;
    printf("Enter how many students: ");
    scanf("%d", &n);

    printf("\nEnter information of students:-\n");

    for (i = 0; i < n; i = i+1)
    {
        printf("\nFor roll number %d,\n", i+1);
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n\n\nDisplaying Information:-\n");

    for (i = 0; i < n; i = i+1)
    {
        printf("\nName: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
