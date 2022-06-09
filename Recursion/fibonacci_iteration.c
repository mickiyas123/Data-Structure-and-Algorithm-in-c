#include <stdio.h>

/**
 * fibo - A function that calculates the nth fibonacci number
 * @n: integer input
 *
 * Return: The fibonacci value of n
 */

int fibo(int n)
{
	int t0 = 0, t1 = 1, s = 0;

	if (n == 1 || n == 0)
		return (n);

	for (int i = 2; i <= n; i++)
	{
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}

	return (s);
}

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int k;

	k = fibo(5);
	printf("%d\n", k);
	return (0);
}
