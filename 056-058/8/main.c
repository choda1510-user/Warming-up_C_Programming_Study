#include <stdio.h>

int main(int argc, char *argv[])
{
    const double PI = 3.14159265;
    printf("%.2f\n", PI);
    printf("%.4f\n", PI);
    printf("%.6f\n", PI);
    printf("%.8f\n", PI);
    printf("%e\n", PI);
    return 0;
}

