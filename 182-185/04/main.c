#include <stdio.h>

int main(int argc, char *argv[])
{
    int year;
    printf("year? ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}

