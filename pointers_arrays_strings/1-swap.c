#include "main.h"
#include <stdio.h>

/**
 * swap_int - swapping 2 int
 * @a: n
 * @b: i
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}

