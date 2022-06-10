#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: This function counts number of words in a long string(sentence)
 *
 * Return: Always 0 successful
 */

int main(void)
{
	char s[] = "Welcome to c programming";

	int word_counter = 1;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' && s[i - 1] != ' ')
			word_counter++;

	}
	printf("Number of words %d\n", word_counter);
	return (0);
}
