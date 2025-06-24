#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: ar
 * @argv: ar
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j = 0, l;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1 ; i < argc ; i++)
	{
		l = atoi(argv[i]);
		if (l > 0)
		{
			j += l;
		}
	}
	printf("%d\n", j);
	return (0);
}
