#include <stdio.h>

int main(int argc, char *argv[])
{
    int kWh, default_cost, cost;
    printf("month usage (kWh)? ");
    scanf("%d", &kWh);
    default_cost = kWh <= 300 ? 1000 : 5000;
    cost = (kWh >= 300 ? 300 * 100 + (kWh - 300) * 200 : kWh * 100);
    printf("electric bill total: %d won\n", default_cost + cost);
    printf("default cost: %d\n", default_cost);
    printf("cost: %d\n", cost);
    return 0;
}

