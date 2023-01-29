#include "array.h"


/**
 * reverse - Reverse array
 * @arr: pointer to an array
*/

void reverse(struct Array *arr)
{
	int i, j = arr->length - 1;
	char temp;

	for (i = 0; i < j; i++, j--)
	{
		temp = arr->A[i];
		arr->A[i] = arr->A[j];
		arr->A[j] = temp;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 succesful
*/

int main(void)
{
	struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};

	reverse(&arr);
}
