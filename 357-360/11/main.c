#include <stdio.h>
#include <string.h>

void reverse(char *str, int length);

int main(int argc, char *argv[])
{
    char str[1024];
    int move, length;

    printf("sentence? ");
    fgets(str, sizeof(str) / sizeof(char), stdin);
    str[strlen(str) - 1] = '\0';
    length = strlen(str);
    do
    {
        printf("size of moving? ");
        scanf("%d", &move);
        if (move == 0)
        {
            break;
        }
        move = move < 0 ? length + move : move;

        reverse(str + (length - move), move);
        reverse(str, length - move);
        reverse(str, length);
        printf("%s\n", str);
    } while (1);
    return 0;
}

void reverse(char *str, int length)
{
    char tmp;
    int i;
    for (i = 0; i < length / 2; i++)
    {
        tmp = *(str + i);
        *(str + i) = *(str + (length - i - 1));
        *(str + (length - i - 1)) = tmp;
    }
    return;
}
