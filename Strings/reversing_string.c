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
	char s[] = "mikiyas";
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	i = i - 1;
	for (j = 0; i > j; i--, j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
	printf("%s\n", s);
	return (0);
}
