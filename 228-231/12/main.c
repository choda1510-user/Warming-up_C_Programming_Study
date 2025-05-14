#include <stdio.h>

int result;

void calculate(char operator, int operand);

int main(int argc, char *argv[])
{
    char op;
    int operand;
    printf("%d ", result);
    while (1)
    {
        scanf("%c %d", &op, &operand); getchar();
        if (op == '0' && operand == 0)
        {
            break;
        }
        calculate(op, operand);
        printf("= %d ", result);
    }
    return 0;
}

void calculate(char operator, int operand)
{
    switch (operator)
    {
    case '+':
        result += operand;
        break;
    case '-':
        result -= operand;
        break;
    case '*':
        result *= operand;
        break;
    case '/':
        result /= operand;
        break;
    case '%':
        result %= operand;
        break;
    }
    return;
}

