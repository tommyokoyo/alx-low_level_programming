#include "main.h"

/**
 * swap_int - The function swaps the value of two intergers
 * @a: int 1
 * @b: int 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*b = *a;

	*a = temp;

}
