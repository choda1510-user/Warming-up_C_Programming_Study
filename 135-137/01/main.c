#include <stdio.h>

int main(int argc, char *argv[])
{
    double g, cm3, g_per_cm3;
    printf("g?");
    scanf("%lf", &g);
    printf("cm3?");
    scanf("%lf", &cm3);
    g_per_cm3 = g / cm3;
    printf("g per cm3: %f\n", g_per_cm3);
    return 0;
}

