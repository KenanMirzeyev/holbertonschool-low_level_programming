#include <stdio.h>
/**
  *main - prints alphabets in reverse
  *
  *Return: 0
  *
*/
int main(void)
{
	int n;

	n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

