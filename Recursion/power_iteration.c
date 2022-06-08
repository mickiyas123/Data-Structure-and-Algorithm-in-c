#include <stdio.h>

/**
 * power - A function that calculates the power of a given number
 * @m: base number
 * @n: exponent
 *
 * Return: base number raised to exponent
 */

int power(int m, int n)
{
	int result = 1;

	for (int i = 0; i < n; i++)
	{
		result *= m;
	}

	return (result);
}

/**
 * main - Entry point
 *
 * Return: Always 0 succesful
 */
int main(void)
{
	int k;

	k = power(2, 4);
	printf("%d\n", k);
	return (0);
}
