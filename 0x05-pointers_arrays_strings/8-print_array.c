#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array.
 * @a: array of integers.
 * @n: number of elemnents of the array to be printed.
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		printf("%d", a[y]);
		if (y != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
