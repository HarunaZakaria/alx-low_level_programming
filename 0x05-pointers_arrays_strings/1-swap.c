#include "main.h"

/**
 * swap_int - swaps the values of x and y
 * @a: pointer 1
 * @b: pointer 2
 * Return; 0
 */

void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
