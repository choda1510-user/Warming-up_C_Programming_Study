#include <stdio.h>

void print_(int n, int count);

int main(int argc, char *argv[])
{
    int n = 1;
    while (n > 0)
    {
        printf("number? ");
        scanf("%d", &n);
        if (n <= 0)
        {
            break;
        }
        print_(n, 20);
    }
    return 0;
}

void print_(int n, int count)
{
    int i;
    for (i = 1; i <= count; i++)
    {
        printf("%d ", n * i);
    }
    printf("\n");
    return;
}

