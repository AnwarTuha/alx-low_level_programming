#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int i;
	int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		month_days[1] = 29;
	}

	for (i = 0; i < month - 1; i++)
	{
		day += month_days[i];
	}

	printf("Day of the year: %d\n", day);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		printf("Remaining days: %d\n", 365 - day);
	}
}
