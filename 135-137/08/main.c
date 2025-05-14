#include <stdio.h>

int main(int argc, char *argv[])
{
    int second, minute, hour;
    printf("second? ");
    scanf("%d", &second);
    printf("It has been played for ");
    hour = second / (60 * 60);
    minute = (second % (60 * 60)) / 60;
    second = second % 60;
    hour != 0 ? printf("%d hour ", hour) : printf("");
    minute != 0 ? printf("%d minute ", minute) : printf("");
    second != 0 ? printf("%d second ", second) : printf("");
    printf("\n");
    return 0;
}

