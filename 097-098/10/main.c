#include <stdio.h>

int main(int argc, char *argv[])
{
    double real_number;
    printf("real number? ");
    scanf("%lf", &real_number);
    printf("2: %e\n", real_number * real_number);
    printf("3: %e\n", real_number * real_number *real_number);
    return 0;
}

