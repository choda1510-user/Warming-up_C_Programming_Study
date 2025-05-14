#include <stdio.h>

int main(int argc, char *argv[])
{
    int kWh, won;
    printf("kWh? ");
    scanf("%d", &kWh);
    won = kWh * 190;
    printf("electric bill: %d\n", won);
    return 0;
}

