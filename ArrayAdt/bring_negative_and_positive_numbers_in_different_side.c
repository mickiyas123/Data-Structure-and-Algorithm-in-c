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
 * rearrange - shift all -ve numbers in left +ve in right
 *
 * @arr: array in struct
 *
*/
void rearrange(struct Array *arr)
{
	int i = 0;
	int j = arr->length - 1;

	while (i < j)

	{
		while (arr->A[i] < 0)
			i++;
		while (arr->A[j] >= 0)
			j--;
		if (i < j)
			swap(&arr->A[i], &arr->A[j]);
	}
}
/**
 * main - Entry point
 *
 * Return: Always 0 succesful
*/
int main(void)
{
	struct Array arr = {{2, -3, 25, 10, -15, -7}, 10, 6};

	rearrange(&arr);
	display(arr);
}
