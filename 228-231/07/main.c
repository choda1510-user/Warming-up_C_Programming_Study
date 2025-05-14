#include <stdio.h>

int is_specific_year(int year);

int main(int argc, char *argv[])
{
    int year, count;
    for (year = 2000, count = 0; year <= 2100; year++)
    {
        if (is_specific_year(year))
        {
            printf("%d ", year);
            count++;
            if (count >= 10)
            {
                printf("\n");
                count = 0;
            }
        }
    }
    printf("\n");
    return 0;
}

int is_specific_year(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        return 1;
    }
    if (year % 100 == 0 && year % 400 == 0)
    {
        return 1;
    }
    return 0;
}

