#include "main.h"

/**
 * _islower - lower
 * @c: char
 *
 * Return: 1 if it's lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
