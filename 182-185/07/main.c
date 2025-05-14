#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, result;
    char op;
    printf("bit express? ");
    scanf("%x %c %x", &a, &op, &b);
    switch (op)
    {
    case '&':
        result = a & b;
        break;
    case '|':
        result = a | b;
        break;
    case '^':
        result = a ^ b;
        break;
    }
    printf("%X %c %X = %X\n", a, op, b, result);
    return 0;
}

