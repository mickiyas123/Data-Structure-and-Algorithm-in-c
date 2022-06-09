#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: the function shows how to create static and dynamic arrays
 *
 * Return: Always 0 successful
 */

int main(void)
{
	/**
	 * static array
	 * int A[10];
	 *
	 * Dynamic array
	 * int *p;
	 *
	 * p = (int *)malloc(5 * sizeof(int));
	 */

	int *p;

	p = (int *)malloc(5 * sizeof(int));
	p[0] = 2;
	p[1] = 4;
	p[2] = 6;
	p[3] = 8;
	p[4] = 10;

	for (int i = 0; i < 5; i++)
		printf("%d\n", p[i]);
	return (0);
}
