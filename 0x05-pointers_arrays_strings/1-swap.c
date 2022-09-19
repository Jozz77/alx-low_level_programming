#include "main.h"
#include <stdio.h>

/**
* swap_int - swapping the values of the integers.
*
* @a: first integer
* @b: second integer
*/

void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
