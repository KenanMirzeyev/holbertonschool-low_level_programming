#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
	char *f;
	char *_strchr(char *s, char c);

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
