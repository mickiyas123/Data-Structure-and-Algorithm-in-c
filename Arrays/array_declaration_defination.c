#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 successful
 */

int main(void)
{
	/**
	 * Declaration
	 * Datatype arrayname size
	 * int A[5]; will have garbage values
	 *
	 * Intialization
	 * int A[5] = {2, 4, 6, 8, 9};
	 * int A[5] = {2, 4}; the remaining 3 values will be zwer
	 * int A[5] = {0}; all values will be zero
	 * int A[] = {2, 4, 6, 8, 9};
	 *
	 *
	 * Accessing values
	 * printf("%d", 2[A]);
	 * printf("%d", A[2]);
	 * printf("%d", *A);
	 */

	int A[5] = {2, 4, 6, 8, 9};

	for (int i = 0; i < 5; i++)
	{
		printf("%d", *(A + i));
	}
}
