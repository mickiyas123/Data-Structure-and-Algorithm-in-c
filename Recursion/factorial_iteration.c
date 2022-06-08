#include <stdio.h>
/**
 * factorial - A function that calcualte a numbers factorial
 * @n: integer input
 *
 * Return: Factorial of a number
 *         if n = 5
 *         result = 120
 */
int factorial(int n)
{
	int result = 1;

	if (n == 0 || n == 1)
	{
		return (1);
	}
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	return (result);
}

/**
 * main - Entry Point
 *
 * Return: Always 0 sucessful
 */

int main(void)
{
	int n;

	n = factorial(5);
	printf("%d\n", n);
	return (0);

}
