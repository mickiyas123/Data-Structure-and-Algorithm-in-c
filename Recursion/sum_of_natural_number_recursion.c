#include <stdio.h>

/**
 * sum - A function that add all natural number including thr given number
 * @n: input natural number
 *
 *
 * Return: sum of first n natural numbers
 */

int sum(int n)
{
	if (n > 0)
	{
		return (sum(n - 1) + n);
	}

	return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int result;
        
	result = sum(5);

	printf("%d\n", result);

	return (0);
}
