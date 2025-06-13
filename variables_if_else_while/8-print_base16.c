#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0
 *
 */
int main(void)
{
	int n;
	int x;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar (n);
	}
	for (x = 'a' ; x <= 'f' ; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}

