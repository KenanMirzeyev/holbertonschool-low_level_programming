#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;
	unsigned int _strspn(char *s, char *accept);

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
