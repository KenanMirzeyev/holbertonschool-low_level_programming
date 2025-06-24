#include <stdio.h>
#include <stdlib.h>

/**
 * main - m
 * @argc: k
 * @argv: l
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, l;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	l = i * j;

	printf("%d\n", l);
	return (0);
}
