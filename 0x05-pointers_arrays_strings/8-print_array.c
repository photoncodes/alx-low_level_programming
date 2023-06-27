#include "main.h"
#include <stdio.h>

/**
 * print_array -prints n elements of an array of integers.
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(", ");
	}

		printf("%d", a[n - 1]);
	putchar('\n');
}
