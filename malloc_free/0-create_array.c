#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array
 * @size: size of c
 * @c: variable
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	A = (char *)malloc(size * sizeof(char));
	if (A == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		A[i] = c;
	}
	return (A);
}

