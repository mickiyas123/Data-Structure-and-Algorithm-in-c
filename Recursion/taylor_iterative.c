#include <stdio.h>
/**
 * e - A taylor function that calculates e the power of x in a given n
 * @x: the power of e value we want
 * @n: number of times to be computed
 *
 * Return: e the power of x
*/

double e(int x, int n)
{
	static double s = 1;
	int i;

	double num = 1;
	double den = 1;

	for (i = 1; i <= n; i++)
	{
		num *= x;
		den *= i;
		s += num / den;
	}
	return (s);
}

/**
 * main - Entry point
 *
 * Return: Always 0 succesful
 */
int main(void)
{
	double k;

	k = e(1, 10);
	printf("%lf\n", k);
	return (0);
}
