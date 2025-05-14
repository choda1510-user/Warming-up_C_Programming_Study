#include <stdio.h>

int main(int argc, char *argv[])
{
	int year, month, day;
	printf("year? ");
	scanf("%d", &year);
	printf("month? ");
	scanf("%d", &month);
	printf("day? ");
	scanf("%d", &day);
	printf("Your input date is %d year %d month %d day.\n", year, month, day);
	return 0;
}

