#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: This function changes Upper case character in to lower case
 *             and Lower case character in to upper case
 *             Ascii is the key in this function
 *
 *             char *s = "WeLcOme To C ProgRamMing"; using this method
 *             will not work since the string will be created in read
 *             only memory it can't be modified
 *
 * Return: Always 0 successful
 */

int main(void)
{
	char s[] = "WeLcOme To C ProgRamMing";

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	printf("%s\n", s);
	return (0);
}
