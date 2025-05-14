#include <stdio.h>

typedef union _mydata
{
    int dword;
    short words[2];
} mydata;

mydata make_mydata(int low_word, int high_word);

int main(int argc, char *argv[])
{
    int low, high;
    mydata a;
    printf("low word?");
    scanf("%x", &low);
    printf("high word?");
    scanf("%x", &high);
    a = make_mydata(low, high);
    printf("dword data: %x\n", a.dword);
    return 0;
}

mydata make_mydata(int low_word, int high_word)
{
    mydata a;
    a.words[0] = (short)low_word;
    a.words[1] = (short)high_word;
    return a;
}

