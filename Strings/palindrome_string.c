#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 successful
 */


/**
 * @str: Pointer to string
 */

int palindrome(char *str);

int main(void)
{
	char str[] = "noon";

	if (palindrome(str))
	{
		printf("The string \"%s\" is palindrome\n", str);
	}
	else
	{
		printf("The string \"%s\" is not palindrome\n", str);
	}
	return (0);
}

/**
 * palindrome - This function checks if a string is palindrome
 * @str: Pointer to string
 *
 * Description: A palindrome is a word, sentence,
 *              verse, or even number that reads
 *              the same backward or forward
 *              example: kayak, deified, rotator, repaper, deed ,peep, wow
 *
 * Return: 1(True) if string is palindrome, 0(False) if not
 */

int palindrome(char *str)
{
	int i, j, val;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	i = i - 1;

	for (j = 0; i > j; j++, i--)
	{
		if (str[j] != str[i])
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
