#include <stdio.h>
#include <string.h>

void reverse_string(char *string);

int main(int argc, char *argv[])
{
    char string[512];
    printf("A string? ");
    fgets(string, sizeof(string) / sizeof(char), stdin);
    string[strlen(string) - 1] = '\0';
    reverse_string(string);
    printf("The sentence was reversed: %s\n", string);
    return 0;
}

void reverse_string(char *string)
{
    int length = strlen(string), i;
    char ch;
    for (i = 0; i < length / 2; i++)
    {
        ch = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = ch;
    }
    return;
}

