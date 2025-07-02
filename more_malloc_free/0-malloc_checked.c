#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * *malloc_checked - checking
 * @b: b
 *
 * Return: return
 */
void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}

