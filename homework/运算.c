#include <stdio.h>
int main()
{
    unsigned long day, month, year;
    scanf("%lu %lu %lu", &day, &month, &year);
    unsigned long date = 0;
    date = (month << 7) | (day << 11) | year;
    printf("压缩后的数字：%lu\n", date);
    unsigned long really_date = 0;
    really_date = year*10000 + month*100 + day;
    printf("真实日期是：%lu", really_date);

    return 0;

    
}