#include <stdio.h>

void print_binary(int n);

int main(int argc, char *argv[])
{
    int n;
    printf("number? ");
    scanf("%x", &n);
    print_binary(n);
    return 0;
}

void print_binary(int n)
{
    int mask = 0x80000000;
    int count, i;
    printf("16 system number %X: ", n);
    for (i = 0, count = 0; i < 4 * 8; i++, count++)
    {
        if (count >= 4)
        {
            printf(" ");
            count = 0;
        }
        printf("%d", -(((n << i) & mask) >> (4 * 8 - 1)));
    }
    printf("\n");
    return;
}

