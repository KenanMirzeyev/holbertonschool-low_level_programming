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

	n = '0';

	while (n < '9')
	{
		putchar (n);
		putchar (',');
		putchar (' ');
		n++;
	}
	printf("9");
	putchar ('\n');
	return (0);
}

