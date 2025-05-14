#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char str[64];
    const char upper_a = 'A';
    const char upper_z = 'Z';
    const char lower_a = 'a';
    const char lower_z = 'z';
    int secrit_key, i;

    printf("sentence? ");
    fgets(str, sizeof(str) / sizeof(char), stdin);
    str[strlen(str) - 1] = '\0';
    printf("secrit key(integer)? ");
    scanf("%d", &secrit_key);

    for (i = 0; i < strlen(str); i++)
    {
        char ch = str[i];
        if (isupper(ch))
        {
            if (ch + secrit_key > upper_z)
            {
                ch = upper_a + ch + secrit_key - upper_z;
            }
            else
            {
                ch = ch + secrit_key;
            }
        }
        else
        {
            if (ch + secrit_key > lower_z)
            {
                ch = lower_a + ch + secrit_key - lower_z;
            }
            else
            {
                ch = ch + secrit_key;
            }
       }
       str[i] = ch;
    }
    printf("encoding sentence: %s\n", str);
    return 0;
}

