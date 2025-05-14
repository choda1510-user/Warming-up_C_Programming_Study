#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isvalied(const char *time);

int main(int argc, char *argv[])
{
    char time[8];
    while (1)
    {
        printf("time(exit if you input .)? ");
        fgets(time, sizeof(time) / sizeof(char), stdin);
        time[strlen(time) - 1] = '\0';
        if (time[0] == '.')
        {
            break;
        }
        if (isvalied(time))
        {
            printf("%c%c:%c%c:%c%c is valied format time.\n", time[0], time[1], time[2], time[3], time[4], time[5]);
        }
        else
        {
            printf("Your input is invalied format time. Please input with hhmmss format.\n");
        }
    }
    return 0;
}

int isvalied(const char *time)
{
    int hour_i, minute_i, second_i;
    char hour[3], minute[3], second[3];
    hour[0] = time[0];
    hour[1] = time[1];
    minute[0] = time[2];
    minute[1] = time[3];
    second[0] = time[4];
    second[1] = time[5];
    hour[2] = '\0';
    minute[2] = '\0';
    second[2] = '\0';
    hour_i = atoi(hour);
    minute_i = atoi(minute);
    second_i = atoi(second);
    if (hour_i >= 24 || minute_i >= 60 || second_i >= 60)
    {
        return 0;
    }
    return 1;
}

