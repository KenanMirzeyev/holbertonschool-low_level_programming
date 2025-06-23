#include "main.h"
#include <stdio.h>

/**
 * *_strstr - strstr
 * @haystack: haystack
 * @needle: needle
 *
 * Return: return
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int j;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (x = 0 ; haystack[x] != '\0' ; x++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[x + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + x);

		}
	}
	return (NULL);
}

