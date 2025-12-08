#include<stdio.h>
int main()
{
    int total_minutes;
    int hours;
    int minutes;
    scanf("%d", &total_minutes);
    hours = total_minutes / 60;
    minutes = total_minutes % 60;
    printf("%d Hour(s) %d Minute(s)
",hours, minutes);
    return 0;
}