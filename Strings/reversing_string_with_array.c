#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: This function reverse a given string
 *             example: Hi...to...iH
 *
 * Return: Always 0 successful
 */

int main(void)
{
	char s[] = "Python";
	char r[7];
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	i = i - 1;
	for (j = 0; i >= 0; i--, j++)
	{
		r[j] = s[i];
	}
	r[j] = '\0';
	printf("%s\n", r);
	return (0);
}
