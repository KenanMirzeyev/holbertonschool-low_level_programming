#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - array
 * @array: array
 * @size: size
 * @actoin: action
 * @size_t: size
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL && action == NULL)
	{
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}

