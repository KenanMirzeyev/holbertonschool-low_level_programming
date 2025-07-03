#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - array
 * @min: minimum
 * @max: maximum
 *
 * Return: str
 */
int *array_range(int min, int max)
{
	int *str;
	int a, b;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min + 1;

	str = malloc(sizeof(int) * b);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < b ; a++)
	{
		str[a] = min + 1;
	}
	return (str);
}

