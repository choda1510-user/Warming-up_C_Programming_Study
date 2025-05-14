#include <stdio.h>

int main(int argc, char *argv[])
{
    int ladder, max_num;
    double per;
    printf("ladder? ");
    scanf("%d", &ladder);
    printf("max_num? ");
    scanf("%d", &max_num);
    per = ((double)ladder / (double)max_num) * 100;
    if (per <= 10)
    {
        printf("A\n");
    }
    else if (per <= 30)
    {
        printf("B\n");
    }
    else if (per <= 60)
    {
        printf("C\n");
    }
    else if (per <= 90)
    {
        printf("D\n");
    }
    else 
    {
        printf("F\n");
    }
    return 0;
}

