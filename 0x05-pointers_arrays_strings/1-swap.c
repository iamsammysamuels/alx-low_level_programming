#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @o: input
 * @p:input
 *
 * Return: Always 0.
 *
 */

void swap_int(int *o, int *p)

{
int temp;
temp = *o;
*o = *p;
*p = temp;
}
