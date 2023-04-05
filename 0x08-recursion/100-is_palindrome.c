#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
* is_palindrome_helper - helps is_palindrome function
*
* @s: string to be checked
* @start: start index of string
* @end: end index of string
*
* Return: 1 if palindrome, 0 otherwise
*/

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
}

/**
* is_palindrome - checks if a given string is a palindrome or not
*
* @s: string to be checked
*
* Return: 1 if palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	int length;

	length = strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
