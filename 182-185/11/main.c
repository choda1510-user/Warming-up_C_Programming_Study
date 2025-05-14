#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, i;
    printf("n? ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i != n || n == 1)
    {
        printf("%d is not primary number\n", n);
    }
    else
    {
        printf("%d is primary number\n", n);
    }
    return 0;
}

