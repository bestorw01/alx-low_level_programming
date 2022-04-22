#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: Pointer to be swaped
* @b: Pointer to be swaped
*
* Return: Void as success
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
