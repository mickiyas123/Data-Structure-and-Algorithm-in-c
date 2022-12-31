#include "array.h"

/**
 * get - get specifc element of an array
 * @arr: Array input
 * @index: the index of the value to be found in the array
 *
 * Return: If found, the array value given at the given index, -1 if not
*/

int get(struct Array arr, int index)
{
	if (index >= 0 && index < arr.length)
		return (arr.A[index]);
	return (-1);
}


/**
 * set - set given arrray value to new element
 * @arr: pointer to an array
 * @index: index of the given array element
 * @value: new value to be set
 *
*/

void set(struct Array *arr, int index, int value)
{
	if (index >= 0 && index < arr->length)
		arr->A[index] = value;
}


/**
 * max - Find the maximum element in a given array
 * @arr: Input Array
 *
 * Return: maximum value of the array,
*/

int max(struct Array arr)
{
	int i;
	int max = arr.A[0];

	for (i = 0; i < arr.length; i++)
	{
		if (arr.A[i] > max)
			max = arr.A[i];
	}
	return (max);
}

/**
 * min - Find minimum element in a given array
 * @arr: Input array
 *
 * Return: minimum value of the array
*/

int min(struct Array arr)
{
	int i;
	int min = arr.A[0];

	for (i = 0; i < arr.length; i++)
	{
		if (arr.A[i] < min)
			min = arr.A[i];
	}
	return (min);
}

/**
 * main - Entry point
 *
 * Return: Always 0 succesful
*/

int main(void)
{
	struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};

	/*printf("%d", get(arr, 0));*/
	/*set(&arr, 1, 6);*/
	/*printf("%d", max(arr));*/
	/*printf("%d", min(arr));*/
    /*printf("%d", sum(arr));*/
}
