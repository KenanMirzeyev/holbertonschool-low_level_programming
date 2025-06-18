#include <stdio.h>
/**
 * mul - multiply
 * product1 - result1
 * product2 - result2
 *
 * Return: 0
 */
int mul(void)
{
	int num1 = 98;
	int num2 = 1024;
	int num3 = (-402);
	int num4 = 4096;

	int product1 = num1 * num2;
	int product2 = num3 * num4;

	printf("%d\n", product1);
	printf("%d\n", product2);
	return (0);
}
