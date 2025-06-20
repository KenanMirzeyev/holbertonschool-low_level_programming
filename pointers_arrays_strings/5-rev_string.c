#include "main.h"
#include <stdio.h>

/**
 * rev_string - rev
 * @s: y
 *
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0;
	int len = 0;
	int end;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
