#include <stdio.h>

int year, month, day;
char week;

void judgmentDate(int num) {
    int year_num = num / 365;
    year = 2000 + year_num;
    int month_num = (num - 365 * year_num) / 30;
    month = (num - 365 * year_num) / 30;
}

int main()
{
    int num;
    while(scanf("%d", &num, num != -1)) {
        judgmentDate(num);
        printf("%d-%02d-%d %s\n", year, month, day, week);
    }
}
