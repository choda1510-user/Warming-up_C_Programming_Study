#include <stdio.h>

int main(int argc, char *argv[])
{
    double kg, m_per_s, j;
    printf("kg? ");
    scanf("%lf", &kg);
    printf("m per s? ");
    scanf("%lf", &m_per_s);
    j = kg * m_per_s * m_per_s / 2;
    printf("j: %.2f J\n", j);
    return 0;
}

