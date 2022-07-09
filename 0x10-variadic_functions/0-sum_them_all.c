#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: the number of parameters being passed
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(pl, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pl, int);
	va_end(x);
	return (sum);
}
