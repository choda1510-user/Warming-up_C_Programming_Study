#include <stdio.h>

int main(int argc, char *argv[])
{
    double krw, won_per_dollor;
    printf("KRW? ");
    scanf("%lf", &krw);
    printf("exchange rate? ");
    scanf("%lf", &won_per_dollor);
    printf("KRW %.0f = USD %.2f\n", krw, krw / won_per_dollor);
    return 0;
}

