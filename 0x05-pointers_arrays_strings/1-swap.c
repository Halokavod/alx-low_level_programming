#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: the first value
 * @b: the second value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;
}
