#include <stdio.h>

int main(int argc, char *argv[])
{
    int price, sale;
    printf("price? ");
    scanf("%d", &price);
    printf("sale? ");
    scanf("%d", &sale);
    printf("sale price: %d won (%d won sales)\n", price - (int)(price * (sale / 100.0)), (int)(price * (sale / 100.0)));
    return 0;
}

