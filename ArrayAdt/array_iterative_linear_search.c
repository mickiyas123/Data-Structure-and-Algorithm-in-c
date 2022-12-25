#include "array.h"

/**
 * swap - swaps two integers
 *
 * @x: the first int value to be swapped
 * @y: the second int value to be swapped
*/

void swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

/**
 * linearSearch - Search for given value in an array
 *
 * @arr: Pointer to struct
 * @value: Value to be searched in given array
 *
 * Return: index of the value in the array if found -1 if not
*/

int linearSearch(struct Array *arr, int value)
{
	int i;

	for (i = 0; i < arr->length; i++)
	{
		if (arr->A[i] == value)
		{
			if (value != arr->A[0])
				/*improving linear search using Transposition or move to head*/
				swap(&arr->A[i], &arr->A[i - 1]);
			/* swap(&arr->A[i], &arr->A[0]);*/
			return (i);
		}
	}
	return (-1);
}


/**
 * main - Entry Point
 *
 * Return: Always 0 Success
*/

int main(void)
{
	struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};

	printf("%d ", linearSearch(&arr, 3));
	return (0);
}
