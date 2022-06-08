#include <stdio.h>

/**
 * fun - Nested recursion function that calls it self
 *
 * @n: integer input
 *
 * Return: n - 10 if n i greater than 100
 */

int fun(int n)
{
	if (n > 100)
		return (n - 10);
	return (fun(fun(n + 11)));
}

/**
 * main - Entry Point
 *
 * Return: Always 0 succesful
 */

int main(void)
{
	int r;

	r = fun(98);
	printf("%d ", r);
	return (0);
}
