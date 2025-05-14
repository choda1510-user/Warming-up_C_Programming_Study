#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, num, i;
    printf("n? ");
    scanf("%d", &n);
    printf("num? ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d ", n * i);
    }
    printf("\n");
    return 0;
}

