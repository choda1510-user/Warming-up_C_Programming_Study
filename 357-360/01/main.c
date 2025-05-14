#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char filename[32];
    char expended[32];
    char fullname[64];
    printf("What is the file name? ");
    fgets(filename, sizeof(filename) / sizeof(char), stdin);
    *(strchr(filename, '\n')) = '\0';
    printf("What is the file's expended type? ");
    fgets(expended, sizeof(expended) / sizeof(char), stdin);
    *(strchr(expended, '\n')) = '\0';
    strcpy(fullname, filename);
    strcat(fullname, ".");
    strcat(fullname, expended);
    printf("Full file name: %s\n", fullname);
    return 0;
}

