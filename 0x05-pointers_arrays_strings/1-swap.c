#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 *
 * @a: pointer to integer 1
 * @b: pointer to integer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
