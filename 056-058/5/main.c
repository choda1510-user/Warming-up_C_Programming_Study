#include <stdio.h>

int main(int argc, char *argv[]) {
    double dollor;
    int won;
    printf("Dollor?\n");
    scanf("%lf",&dollor);
    won = dollor * 1000;
    printf("$%.2f is %d won.\n", dollor, won);
    return 0;
}

