#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: the function shows how to increase size of an array
 *
 * Return: Always 0 successful
 */

int main(void)
{
	int *p, *q;

	p = (int *)malloc(5 * sizeof(int));
	p[0] = 1;
	p[1] = 4;
	p[2] = 6;
	p[3] = 9;
	p[4] = 12;

	q = (int *)malloc(10 * sizeof(int));

	for (int i = 0; i < 5; i++)
		q[i] = p[i];
	free(p);
	p = q;
	q = NULL;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
	return (0);
}
