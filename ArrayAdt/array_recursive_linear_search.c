#include "array.h"


/**
 * linearSearch - Search for given value in an array
 *
 * @arr: input array
 * @value: Value to be searched in given array
 * @length: length of input array
 *
 * Return: index of the value in the array if found -1 if not
*/

int linearSearch(int arr[], int value, int length)
{
	length--;

	if (length >= 0)
	{
		if (arr[length] == value)
		{
			return (length);
		}
		else
		{
			return (linearSearch(arr, value, length));
		}
	}
	else
	{
		return (-1);
	}
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

	printf("%d ", linearSearch(arr.A, 3, arr.length));
	return (0);
}
