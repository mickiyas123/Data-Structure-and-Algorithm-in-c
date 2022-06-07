#include <stdio.h>

/**
 * fun - Recursive function
 * @n: integer input
 *
 * Descriprion: the function claculate a positive integer number square using
 *              recursion with static or global variables
 *
 *              example if n = 5 x will also be 5 and it will return 25
 */

//  Global variable
//  int x = 0;

int fun(int n)
{
	static int x = 0;
	if (n > 0)
	{
		x++;
		return fun(n - 1) + x;
	}
	return 0;
}

/**
 * Main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;
	r = fun(10);
	printf("%d\n", r);
	return 0;
}
