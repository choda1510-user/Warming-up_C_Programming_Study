#include <stdio.h>

int main(int argc, char *argv[])
{
	int hour, minute, second;
	printf("hour? ");
	scanf("%d", &hour);
	printf("minute? ");
	scanf("%d", &minute);
	printf("second? ");
	scanf("%d", &second);
	printf("Your input time is %02d:%02d:%02d.\n", hour, minute, second);
	return 0;
}

