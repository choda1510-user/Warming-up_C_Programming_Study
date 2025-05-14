#include <stdio.h>

void print_consist(int n);

int main(int argc, char *argv[])
{
    int n;
    while (1)
    {
        printf("n? ");
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        print_consist(n);
    }
    return 0;
}

void print_consist(int n)
{
    int i, count;
    for (i = 1, count = 0; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("=> %d\n", count);
    return;
}

