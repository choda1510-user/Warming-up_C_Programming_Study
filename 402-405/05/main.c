#include <stdio.h>
#include <string.h>

struct product {
    char name[32];
    int price;
    int num;
};
void print_product(struct product *ptr);

int main(int argc, char *argv[])
{
    char name[32];
    int price, num;
    struct product product;
    printf("name? ");
    scanf("%s", name);
    printf("price? ");
    scanf("%d", &price);
    printf("num? ");
    scanf("%d", &num);

    strcpy(product.name, name);
    product.price = price;
    product.num = num;

    print_product(&product);
    return 0;
}

void print_product(struct product *ptr)
{
    printf("[%s %d$ count:%d]\n", ptr->name, ptr->price, ptr->num);
}

