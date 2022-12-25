#include "array.h"

/**
 * binarySearch - search for a given value in array
 *
 * @arr: array to be searched
 * @value: value to be searched in given array
 * @low: the first array value index
 * @high: the lat array value index
 *
 *
 * Return: index of the value if found -1 if not
 *
*/

int binarySearch(int arr[], int value, int low, int high)
{
	int middle;

	while (low <= high)
	{
		middle = (low + high) / 2;

		if (value == arr[middle])
		{
			return (middle);
		}
		else if (value < arr[middle])
		{
			high = middle - 1;
		}
		else if (value > arr[middle])
		{
			low = middle + 1;
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
	int i = 0;

	printf("%d ", binarySearch(arr.A, 3, 0, arr.length));
	return (0);
}
