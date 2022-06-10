#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 successful
 */

int valid(char *name);

int main(void)
{
	char name[] = "micki?yas123";

	if (valid(name))
	{
		printf("Valid string");
	}
	else
	{
		printf("Invalid string");
	}
	return (0);
}

/**
 * valid - This function checks if a given string is valid or not
 * @name: pointer pointing to a string
 *
 * Description: A valid string is a string that doesn't contain
 *              any special charcter
 *              special character only contains Upper case,Lower case
 *              ,and numbers(only in this function case)
 *
 * Return: 1(True) if it is valid, 0(False) if it is invalid
 */


int valid(char *name)
{
	for (int i = 0; name[i] != '\0'; i++)
	{
		if (!(name[i] >= 'a' && name[i] <= 'z') &&
		    !(name[i] >= 'A' && name[i] <= 'Z') &&
		    !(name[i] >= 48 && name[i] <= 57)
		   )
		{
			return (0);
		}
	}
	return (1);
}
