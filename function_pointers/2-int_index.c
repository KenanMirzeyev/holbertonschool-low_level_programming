#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search through
 * @size: the number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: the index of the first element for which cmp doesn't return 0,
 *         -1 if no match is found or if size <= 0 or array/cmp is NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}

	return (-1);
}

