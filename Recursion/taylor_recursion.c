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
	static double p = 1, f = 1;
	double r;

	if (n == 0)
		return (1);
	r = e(x, n - 1);
	p = p * x;
	f = f * n;
	return (r + p / f);
}

/**
 * main - Entry point
 *
 * Return: Always 0 succesful
 */
int main(void)
{
	double k;

	k = e(3, 10);
	printf("%lf\n", k);
	return (0);
}
