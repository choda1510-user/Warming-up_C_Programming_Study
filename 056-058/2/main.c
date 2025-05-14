#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	printf("10 number system integer? ");
	scanf("%d", &n);
	printf("10 base number %d is %x in 16 base number\n", n, n);
	return 0;
}

