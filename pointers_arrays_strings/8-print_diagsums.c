#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - p
 * @a: a
 * @size: size
 *i
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int er = 0;
	int hi = 0;


	for (i = 0 ; i < size ; i++)
	{
		er += a[i * size + i];
		hi += a[i * size + (size - 1 - i)];

	}
	printf("%d, %d\n", er, hi);
}
