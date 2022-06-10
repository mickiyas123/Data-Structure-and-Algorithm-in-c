#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 successful
 */


/**
 * @str1: Pointer to first string
 */

/**
 * @str2: Pointer to first string
 */

int compare(char *str1, char *str2);

int main(void)
{
	char str1[] = "paint";
	char str2[] = "painting";

	if (compare(str1, str2))
	{
		printf("Strings are the same\n");
	}
	else
	{
		printf("Strings are not the same\n");
	}
	return (0);
}

/**
 * compare - This function compare two string
 * @str1: Pointer to first string
 * @str2: pointer to second string
 *
 * Return: 1(True) if string are the same, 0(False) if not
 */

int compare(char *str1, char *str2)
{
	int i, val;

	for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
	{
		if (str1[i] != str2[i])
		{
			val = 0;
			break;
		}
		else
		{
			val = 1;
		}
	}
	return (val);
}
