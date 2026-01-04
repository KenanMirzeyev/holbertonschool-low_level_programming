#include "main.h"

/**
 * _isalpha - alpha
 * @c: char
 *
 * Return: 1
 */
int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') ||
	   (c <= 'A' && c >= 'Z'))
		return (1);

	return (0);
}
