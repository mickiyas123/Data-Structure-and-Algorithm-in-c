#include <stdio.h>

/**
 * fun - Recursive function
 * @n: integer input
 *
 * Descriprion: the function claculate a positive integer number square using
 *              recursion with static or global variables
 *
 *              example if n = 5 x will also be 5 and it will return 25
 *
 * Return: square of a number
 */

int fun(int n)
{
	static int x;

	if (n > 0)
	{
		x++;
		return (fun(n - 1) + x);
	}
	return (0);
}


/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r;

	r = fun(10);
	printf("%d\n", r);
	return (0);
}
