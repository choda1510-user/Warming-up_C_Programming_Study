#include <stdio.h>

int main(int argv, char *args[])
{
    int prices[5], discount_prices[5];
    int discount_rate, i;
    printf("Enter five prices: ");
    scanf("%d %d %d %d %d", &prices[0], &prices[1], &prices[2], &prices[3], &prices[4]);
    printf("Discount rate? ");
    scanf("%d", &discount_rate);
    for (i = 0; i < sizeof(prices) / sizeof(int); i++)
    {
        discount_prices[i] = prices[i] - (prices[i] * discount_rate / 100);
        printf("price: %-8d --> discount price: %-8d\n", prices[i], discount_prices[i]);
    }
    return 0;
}

