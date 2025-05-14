#include <stdio.h>

int main(int argv, char *args[])
{
    char seats[10];
    int count, end, i, j;
    for (i = 0; i < sizeof(seats) / sizeof(seats[0]); i++)
    {
        seats[i] = 'O';
    }
    i = 0;
    do
    {
        printf("current seats: [ ");
        for (j = 0; j < sizeof(seats) / sizeof(seats[0]); j++)
        {
            printf("%c ", seats[j]);
        }
        printf("]\n");
        printf("How many seats would you book?");
        scanf("%d", &count);
        end = count + i;
        if (end >= sizeof(seats) / sizeof(seats[0]))
        {
            break;
        }
        for (; i < end; i++)
        {
            seats[i] = 'X';
            printf("%d ", i + 1);
        }
        printf("seats book.\n");
    } while (i < sizeof(seats) / sizeof(seats[0]));
    printf("It can't to book %d seats because last seats is %ld.\n", count, sizeof(seats) / sizeof(seats[0]) - i);
    return 0;
}

