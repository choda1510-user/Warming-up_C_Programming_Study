#include <stdio.h>
#include <math.h>

int calculate(int price, int per);

int main(int argc, char *argv[])
{
    int sale, price = 1;
    printf("sale? ");
    scanf("%d", &sale);
    while (price != 0)
    {
        printf("price? ");
        scanf("%d", &price);
        if (price == 0)
        {
            break;
        }
        printf("sale price: %d\n", calculate(price, sale));
    }
    return 0;
}

int calculate(int price, int per)
{
    price -= round(price * ((double)per / 100));
    return price;
}

