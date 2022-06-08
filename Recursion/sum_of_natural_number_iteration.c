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
	int totalsum = 0;
	for (int i = 1; i <= n; i++)
	{
		totalsum += i;
	}

	return(totalsum);
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
