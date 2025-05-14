#include <stdio.h>

int main(int argc, char *argv[])
{
    double kg, m, j;
    printf("Kg? ");
    scanf("%lf", &kg);
    printf("m? ");
    scanf("%lf", &m);
    j = 9.8 * kg * m;
    printf("energy: %.2f J\n", j);
    return 0;
}

