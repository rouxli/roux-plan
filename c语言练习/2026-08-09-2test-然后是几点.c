#include <stdio.h>

int main()
{
    int time1, time2;

    scanf("%d %d", &time1, &time2);

    int t1 = time1 /100 * 60 + time1 % 100;
    int t = t1 + time2;
    int hour = t / 60;
    int minute = t % 60;
    
    printf("%d%d", hour, minute);
    return 0;
}