#include <stdio.h>
#include <stdlib.h>

#define _INPUT_BUF_LEN_ 32
#define _TRUE_ 1
#define _FALSE_ 0

struct date
{
    int year;
    int mouth;
    int day;
};

void print_date(struct date date);
int equal_date(struct date date1, struct date date2);

struct date target = { 2019, 8, 15 };

int main(int argc, char *argv[])
{
    char input_buf[_INPUT_BUF_LEN_];
    struct date date;
    struct date zero = { 0, 0, 0 };

    while (_TRUE_)
    {
        /*
        printf("year? ");
        fgets(input_buf, _INPUT_BUF_LEN_, stdin);
        date.year = atoi(input_buf);

        printf("mouth? ");
        fgets(input_buf, _INPUT_BUF_LEN_, stdin);
        date.mouth = atoi(input_buf);

        printf("day? ");
        fgets(input_buf, _INPUT_BUF_LEN_, stdin);
        date.day = atoi(input_buf);
        //*/

        printf("date(yyyy mm dd)? ");
        scanf("%d %d %d", &(date.year), &(date.mouth), &(date.day));

        if (equal_date(date, zero))
        {
            break;
        }

        print_date(date);
    }
    return 0;
}

void print_date(struct date date)
{
    if (equal_date(date, target))
    {
        printf("%d/%d/%d is \n", date.year, date.mouth, date.day);
    }
    else
    {
        printf("%d/%d/%d is not \n", date.year, date.mouth, date.day);
    }
}

int equal_date(struct date date1, struct date date2)
{
    if (date1.year == date2.year && date1.mouth == date2.mouth && date1.day == date2.day)
    {
        return _TRUE_;
    }
    else
    {
        return _FALSE_;
    }
}
