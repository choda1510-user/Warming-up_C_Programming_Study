#include <stdio.h>
#include <stdlib.h>

int is_valied_time(int hh, int mm, int ss);
int make_time_format(int hh, int mm, int ss, char *time_format);

int main(int argc, char *argv[])
{
    int hour, minute, second, len;
    char time_format[9];
    printf("hour minute second? ");
    scanf("%d %d %d", &hour, &minute, &second);
    len = make_time_format(hour, minute, second, time_format);
    if (len == -1)
    {
        printf("It's not valied time.\n");
        return 0;
    }
    printf("%s\n", time_format);
    return 0;
}

int make_time_format(int hh, int mm, int ss, char *time_format)
{
    if (!is_valied_time(hh, mm, ss))
    { 
        return -1;
    }
    return sprintf(time_format, "%02d:%02d:%02d", hh, mm, ss);
}
int is_valied_time(int hh, int mm, int ss)
{
    if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59)
    {
        return 1;
    }
    else 
    { 
        return 0;
    }
}

