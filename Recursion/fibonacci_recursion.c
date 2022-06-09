#include <stdio.h>

/**
 * fibo - A function that calculates the nth fibonacci number
 * @n: integer input
 *
 * Return: The fibonacci value of n
 */

int fibo(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (fibo(n - 1) + fibo(n - 2));
}

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int k;

	k = fibo(9);
	printf("%d\n", k);
	return (0);
}
