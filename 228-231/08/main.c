#include <stdio.h>

int is_currect_date(int year, int month, int day);

int main(int argc, char *argv[])
{
    int year, month, day;
    while (1)
    {
        printf("date (year month day)? ");
        scanf("%d %d %d", &year, &month, &day);
        if (is_currect_date(year, month, day))
        {
            break;
        }
        printf("This is wrong date.\n");
    }
    printf("Date is %d year %d month %d day.\n", year, month, day);
    return 0;
}

int is_currect_date(int year, int month, int day)
{
    if (month < 1 || month > 12)
    {
        return 0;
    }
    if (day < 1 || day > 30)
    {
        return 0;
    }
    return 1;
}

