#include "array.h"

/**
 * sum - Add of all array elements
 * @arr: input array
 *
 * Return: sum of elements
*/

int sum(struct Array arr)
{
	int i, sum = 0;

	for (i = 0; i < arr.length; i++)
		sum += arr.A[i];
	return (sum);
}

/**
 * average - Avarage value of an array elements
 *
 * Return: sum of array element divided by total length
*/

float average(struct Array arr)
{
	return (sum(arr) / arr.length);
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
