#include <stdio.h>

int main(int argc, char *argv[])
{
    double per;
    int g_water, g;
    printf("bound g? ");
    scanf("%d", &g_water);
    printf("g? ");
    scanf("%d", &g);
    per = ((double)g / ((double)g + g_water)) * 100;
    printf("%.2f %%\n", per);
    return 0;
}

