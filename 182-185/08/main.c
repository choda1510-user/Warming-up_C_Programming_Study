#include <stdio.h>

int main(int argc, char *argv[])
{
    char ch = 32;
    for (ch = 32; ch <= 126; ch++)
    {
        printf("%c ", ch);
        if ((ch - 31) % 24 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

