#include "function_pointers.h"

/**
 * int_index - index
 * @array: array
 * @size: size
 * @cmp: cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL && cmp == NULL)
	{
		return;
	}
	for (k = 0 ; k < size ; k++)
	{
		cmp(array[k] != 0);
		return (k);
	}
	return (-1);
}


