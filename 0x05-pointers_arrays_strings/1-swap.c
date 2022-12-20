#include "main.h"
/**
 * swap_int - swap the value of 2 intergers
 * @a: first int
 * @b: second int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
