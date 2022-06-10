#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: This function shows how we can count
 *             vowels and consonents
 *
 * Return: Always 0 successful
 */

int main(void)
{
	char s[] = "How are you?";

	int vowel_counter = 0;
	int consonent_counter = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A' ||
		    s[i] == 'e' || s[i] == 'E' ||
		    s[i] == 'i' || s[i] == 'I' ||
		    s[i] == 'o' || s[i] == 'O' ||
		    s[i] == 'u' || s[i] == 'U')
		    {
			    vowel_counter++;
		    }
		else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			consonent_counter++;
		}
	}
	printf("Number of vowels %d\n", vowel_counter);
	printf("Number of consonents %d\n", consonent_counter);
	return (0);
}
