#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _atoi - converts string to integer
*
* @s: string to be converted
*
* Return: new converted integer
*/

int _atoi(char *s)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
