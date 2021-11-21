#include<stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
} start, stop, diff;


int main()
{
    printf("For first time period,\n");
    printf("Enter hours: ");
    scanf("%d", &start.hours);
    printf("Enter minutes: ");
    scanf("%d", &start.minutes);
    printf("Enter seconds: ");
    scanf("%d", &start.seconds);

    printf("\nFor second time period,\n");
    printf("Enter hours: ");
    scanf("%d", &stop.hours);
    printf("Enter minutes: ");
    scanf("%d", &stop.minutes);
    printf("Enter seconds: ");
    scanf("%d", &stop.seconds);

    if(stop.seconds > start.seconds)
    {
        start.seconds = start.seconds + 60;
        start.minutes = start.minutes - 1;

    }

    if(stop.minutes > start.minutes)
    {
        start.minutes = start.minutes + 60;
        start.hours = start.hours - 1;

    }

    diff.seconds = start.seconds - stop.seconds;
    diff.minutes = start.minutes - stop.minutes;
    diff.hours = start.hours - stop.hours;

    printf("\nTime Difference = %d : %d : %d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
