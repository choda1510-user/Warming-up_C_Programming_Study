#include <stdio.h>

int main(int argc, char *argv[])
{
    double usd, won_per_dollor;
    printf("USD? ");
    scanf("%lf", &usd);
    printf("exchange rate? ");
    scanf("%lf", &won_per_dollor);
    printf("USD %.0f = KRW %.2f\n", usd, usd * won_per_dollor);
    return 0;
}

