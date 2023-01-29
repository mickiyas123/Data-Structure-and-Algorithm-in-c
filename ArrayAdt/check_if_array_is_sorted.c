#include "array.h"

/**
 * is_sorted - check if array is sorted or not
 *
 * @arr: pointer so a struct containing array
 *
 * Retrun: true if array is sorted
 *         false if not
 */

int is_sorted(struct Array *arr)
{
		int i;

		for (i = 0; i < arr->length - 1; i++)
		{
			if (arr->A[i] > arr->A[i + 1])
				return (1);
		}
		return (0);

}

/**
 * main - Entry point
 *
 * Return: Always 0 succesful
*/

int main(void)
{
	struct Array arr = {{2, 4, 5, 6, 9, 10, 11}, 20, 7};
}
