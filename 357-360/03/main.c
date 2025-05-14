#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i, count;
    char str[1024];
    printf("A sentence? ");
    fgets(str, sizeof(str) / sizeof(char), stdin);
    for (i = 0, count = 0; str[i] != '\0' && i < sizeof(str) / sizeof(char); i++)
    {
        if (isalpha(str[i]))
        {
            count++;
        }
    }
    printf("There is(are) %d alphabet in sentence.\n", count);
    return 0;
}

