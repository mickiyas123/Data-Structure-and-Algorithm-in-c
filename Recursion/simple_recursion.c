#include <stdio.h>

/**
 * fun - Recursive function calling it self
 * @n: integer input passed from main function
 *
 * Description: this simple function takes an integer input and it keeps
 *              printing the input then decrementing it untill it is less
 *              than or equal to 0
 *
 *              example n = 3
 *
 *              output 3 2 1
 */

void fun(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
		fun(n - 1);
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 3;

	fun(n);
	return (0);
}
