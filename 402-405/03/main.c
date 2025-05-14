#include <stdio.h>
#include <stdlib.h>

#define _INPUT_BUF_LEN_ 32
struct date
{
    int year;
    int mouth;
    int day;
};

void print_date(struct date date);

int main(int argc, char *argv[])
{
    char input_buf[_INPUT_BUF_LEN_];
    struct date date;

    printf("year? ");
    fgets(input_buf, _INPUT_BUF_LEN_, stdin);
    date.year = atoi(input_buf);

    printf("mouth? ");
    fgets(input_buf, _INPUT_BUF_LEN_, stdin);
    date.mouth = atoi(input_buf);

    printf("day? ");
    fgets(input_buf, _INPUT_BUF_LEN_, stdin);
    date.day = atoi(input_buf);

    print_date(date);
    return 0;
}

void print_date(struct date date)
{
    printf("%d/%d/%d\n", date.year, date.mouth, date.day);
}

