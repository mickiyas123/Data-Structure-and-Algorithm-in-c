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
        return (n*(n + 1) / 2);
}

/**
 * main - Entry point
 *
 *
 * Description: print sum of first n natural numbers
 *              example: if n == 5
 *                       output = 15
 * Return: Always 0 success
 */

int main(void)
{
	int result = sum(10);
	printf("%d", result);
	return (0);
}
