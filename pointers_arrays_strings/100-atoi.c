include "main.h"
#include <stdio.h>

/**
 * _atoi - t
 * @s: a
 * Return: value
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		sign *= -1;
		else if (s[i] == '+')
		;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			started = 1;
		}
		else if (started)
		break;
		i++;
	}
		return (result * sign);
}

