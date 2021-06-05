// Task #0: Write a c program to calculate Letter Grade from Marks. (i.e. 38-> F; 87 -> A+...)

#include<stdio.h>

int main()
{
    float a;

    printf("Enter marks: ");
    scanf("%f", &a);

    if(a >= 80)
    {
        printf("Letter Grade: A+");
    }

    else if(a >= 70 && a < 80)
    {
        printf("Letter Grade: A");
    }

    else if(a >= 60 && a < 70)
    {
        printf("Letter Grade: A-");
    }

    else if(a >= 50 && a < 60)
    {
        printf("Letter Grade: B");
    }

    else if(a >= 40 && a < 50)
    {
        printf("Letter Grade: C");
    }

    else
    {
        printf("Letter Grade: F");
    }


    return 0;
}
