#include <stdio.h>

int main(int argc, char *argv[])
{
    int N, n, i, count = 0;
    printf("N? ");
    scanf("%d", &N);
    for (n = 2; n <= N; n++)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == n && n != 1)
        {
            printf("%3d ", n);
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

