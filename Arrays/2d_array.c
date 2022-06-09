#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description: the function shows how to create and access 2d arrays
 *
 * Return: Always 0 successful
 */

int main(void)
{
	/**
	 * method 1
	 * int A[3][4] = {{1,2,3,4},{5,6,7,8}, {9, 10, 11, 12}};
	 *
	 * method 2;
	 * int *B[3];
	 * B[0] = (int *)malloc(4 * sizeof(int));
	 * B[1] = (int *)malloc(4 * sizeof(int));
	 * B[2] = (int *)malloc(4 * sizeof(int));
	 *
	 *
	 * method 3
	 *
	 * int **C;
	 * C = (int **)malloc(3 * sizeof(int *));
	 * c[0] = (int *)malloc(4 * sizeof(int));
	 * c[1] = (int *)malloc(4 * sizeof(int));
	 * c[2] = (int *)malloc(4 * sizeof(int));
	 *
	 */

	int A[3][4] = {{1,2,3,4},{5,6,7,8}, {9, 10, 11, 12}};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	return (0);
}
