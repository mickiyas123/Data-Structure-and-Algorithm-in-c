#include <stdio.h>

/**
 * power - A recurtion function that calculates the power of a given number
 * @m: base number
 * @n: exponent
 *
 * Return: base number raised to exponent
 */

int power(int m, int n)
{
	if (n == 0)
		return (1);

	if (n % 2 == 0)
		return (power(m * m, n / 2));
	return (m * power(m * m, (n - 1) / 2));
}

/**
 * main - Entry point
 *
 * Return: Always 0 succesful
 */
int main(void)
{
	int k;

	k = power(3, 3);
	printf("%d\n", k);
	return (0);
}
