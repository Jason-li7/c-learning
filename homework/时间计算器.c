#include <stdio.h>

int main()
{
    int time1, time2;
    scanf("%d %d", &time1, &time2);
    int hour1 = time1/100;
    int minute1 = time1%100;
    int hour2 = time2/100;
    int minute2 = time2%100;
    if (time1 > time2){
        hour2 += 24;
    }
    int hour_ = hour2 - hour1;
    int minute_ = minute2 - minute1;
    if (minute_ < 0){
        minute_ += 60;
        hour_ -= 1;
    }
    printf("时间差是%d小时%d分钟。\n", hour_, minute_);
    return 0;
}
