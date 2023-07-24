#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @author Whrite
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	change = *b;
	*b = *a;
	*a = change;
}
