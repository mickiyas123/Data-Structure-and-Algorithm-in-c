#include <stdio.h>

void funB(int n);


/**
 * funA - A function that prints intger input and calls funB;
 *
 * @n: integer input
 */


void funA(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		funB(n);
	}
}

/**
 * funB - A function that prints intger input and calls funA;
 *
 * @n: integer input
 */

void funB(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		funA(n / 2);
	}
}

/**
 * main - Entry Point
 *
 * Return: Always 0 succesful
 */

int main(void)
{
	funA(20);
	return (0);
}
