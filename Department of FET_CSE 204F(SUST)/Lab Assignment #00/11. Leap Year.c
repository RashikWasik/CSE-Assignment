/*Task #11: Write a program to check Leap Year*/

#include<stdio.h>
int main()

{
    int a;

    printf("Enter year: ");
    scanf("%d", &a);

    if (a%4 == 0 && a%100 != 0 )
        printf("\n%d is a Leap Year.\n", a);

    else if (a%4 == 0  &&  a%100 == 0  &&  a%400 == 0)
        printf("\n%d is a Leap Year.\n", a);

    else
        printf("\n%d is not a Leap Year.\n", a);


    return 0;
}
