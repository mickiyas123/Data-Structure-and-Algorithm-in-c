#include "array.h"

/**
 * insert_in_sorted_array - insert a value in sorted array
 *
 * @arr: pointer so a struct containing array
 * @value: value to be inserted
 *
 */

void insert_in_sorted_array(struct Array *arr, int value)
{
	int i = arr->length - 1;

	while (arr->A[i] > value)
	{
		arr->A[i + 1] = arr->A[i];
		i--;
	}
	arr->A[i + 1] = value;
}

/**
 * main - Entry point
 *
 * Return: Always 0 succesful
*/

int main(void)
{
	struct Array arr = {{2, 4, 5, 6, 9, 10, 11}, 20, 7};

	insert_in_sorted_array(&arr, 7);
	printf("%d ", arr.A[4]);
}
