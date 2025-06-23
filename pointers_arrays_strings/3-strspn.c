#include "main.h"
#include <stdio.h>

/**
 * _strspn - strspn
 * @s: s
 * @accept: acc
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int d, g;

	while (s[x] != '\0')
	{
		g = 0;
		for (d = 0 ; accept[d] ; d++)
		{
			if (s[x] == accept[d])
			{
				g = 1;
				break;
			}
		}
		if (g == 0)
		{
			break;
		}
		x++;
	}
	return (x);
}
