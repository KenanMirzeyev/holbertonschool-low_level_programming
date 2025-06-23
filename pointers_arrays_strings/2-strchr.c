#include "main.h"
#include <stdio.h>

/**
 * *_strchr - strchr
 * @s: s
 * @c: c
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int f = 0;

	while (s[f] != '\0')
	{
		if (s[f] == c)
		{
			return (&s[f]);

		}
		f++;
	}
	if (c == '\0')
	{
		return (&s[f]);
	}
	return (NULL);
}


