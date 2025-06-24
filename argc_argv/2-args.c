#include <stdio.h>

/**
 * main - main
 * @argc: ar
 * @argv: ar
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc ; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
