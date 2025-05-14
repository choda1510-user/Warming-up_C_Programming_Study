#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, y;
    printf("points(x, y)? ");
    scanf("%d %d", &x, &y);
    if (x > 0)
    {
        if (y > 0)
        {
            printf("1\n");
        }
        if (y < 0)
        {
            printf("4\n");
        }
    }
    if (x < 0)
    {
        if (y > 0)
        {
            printf("2\n");
        }
        if (y < 0)
        {
            printf("3\n");
        }
    }
    return 0;
}

