#include "array.h"

/**
 * display - loop over an array display values
 *
 * @arr: structure that has array
 * Time Compleixty -------> o(n)
*/

void display(struct Array arr)
{
	int i;

	printf("All the numbers in the Array\n");
	for (i = 0; i < arr.length; i++)
	{
		printf("%d ", arr.A[i]);
	}
	printf("\n");
}

/**
 * append - Add element at the end of an array
 *
 * @arr: Pointer to a structure
 * @value: New value to be inserted at index
 * Time Compleixty -------> o(1)
*/

void append(struct Array *arr, int value)
{
	if (arr->length < arr->size)
	{
		arr->A[arr->length] = value;
		arr->length++;
	}
}

/**
 * insert - Add element at any given position within the array
 *
 * @arr: Array inside a structure
 * @index: Array position to be inserted at
 * @value: value to be inserted at given index
 * Time Compleixty -------> Best Case = o(1)
 *                 -------> Worst Case = o(n)
*/

void insert(struct Array *arr, int index, int value)
{
	int i;

	if (index >= 0 && index <= arr->length)
	{
		for (i = arr->length; i > index; i--)
			arr->A[i] = arr->A[i - 1];
		arr->A[index] = value;
		arr->length++;
	}

}

/**
 * delete - Delete array element at given index
 *
 * @arr: Pointer to a struct
 * @index: Postion of array element to be removed
 * Time Compleixty -------> Best Case = o(1)
 *                 -------> Worst Case = o(n)
 *
 * Return: Removed value or 0
*/

int delete(struct Array *arr, int index)
{
	int i;
	int x = arr->A[index];

	if (index >= 0 && index < arr->length)
	{
		for (i = index; i < arr->length - 1; i++)
			arr->A[i] = arr->A[i + 1];
		arr->length--;
		return (x);
	}

	return (0);
}


/**
 * main - Entry point
 *
 * Return: Always 0 successful
*/

int main(void)
{
	struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};

	LinearSearch(&arr, 3);
}
