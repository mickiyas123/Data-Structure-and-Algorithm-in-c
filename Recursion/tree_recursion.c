#include <stdio.h>
/**
 * fun - A Tree recursion function which calls it self twice
 * @n: integer input
 */

void fun(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
		fun(n - 1);
		fun(n - 1);
	}
}

/**
 * main - Entry Point
 *
 * Return: Always 0 success
 */

int main(void)
{
	fun(3);
	return (0);
}
