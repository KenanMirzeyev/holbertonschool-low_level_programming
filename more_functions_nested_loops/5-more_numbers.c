#include "main.h"
/**
 * more_numbers - prints 10 times
 *
 * Return : 0
 */
void more_numbers(void)
{
	int n;

	while (n < 10)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
