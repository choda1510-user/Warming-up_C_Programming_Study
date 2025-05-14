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
    int i, j;
    struct product products[5];

    for (i = 0; i < 5; i++)
    {
        printf("name? ");
        scanf("%s", products[i].name);
        if (strcmp(products[i].name, ".") == 0)
        {
            break;
        }
        printf("price num? ");
        scanf("%d %d", &(products[i].price), &(products[i].num));
    }
    for (j = 0; j < i; j++)
    {
        print_product(&(products[j]));
    }
    return 0;
}

void print_product(struct product *ptr)
{
    printf("[%s %d$ count:%d]\n", ptr->name, ptr->price, ptr->num);
}

