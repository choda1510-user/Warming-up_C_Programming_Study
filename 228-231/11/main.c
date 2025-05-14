#include <stdio.h>

int is_primary_number(int N);

int main(int argc, char *argv[])
{
    int N, i, count;
    printf("figure out between 1 and N to primary number. N? ");
    scanf("%d", &N);
    for (i = 2, count = 0; i <= N; i++)
    {
        if (is_primary_number(i))
        {
            printf("%3d", i);
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

int is_primary_number(int N)
{
    int i;
    for (i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

