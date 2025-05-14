#include <stdio.h>

int main(int argc, char *argv[])
{
    int month;
    printf("What is month? ");
    scanf("%d", &month);
    month >= 1 && month <= 12 ? printf("currect value\n") : printf("wrong value\n");
    return 0;
}

