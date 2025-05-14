#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char name[256];
    char short_name[4];
    printf("Enter your name: ");
    fgets(name, sizeof(name) / sizeof(char), stdin);
    short_name[0] = *(strtok(name, " "));
    short_name[1] = *(strtok(NULL, " "));
    short_name[2] = *(strtok(NULL, " "));
    short_name[3] = '\0';
    printf("Your short name: %s\n", short_name);
    return 0;
}

