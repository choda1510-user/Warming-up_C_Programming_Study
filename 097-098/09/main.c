#include <stdio.h>

int main(int argc, char *argv[])
{
    const double m2_per_pyeong = 0.3025;
    double m2, pyeong;
    printf("squred m? ");
    scanf("%lf", &m2);
    pyeong = m2 * m2_per_pyeong;
    printf("%.2f squred m = %.2f pyeong\n", m2, pyeong);
    return 0;
}

