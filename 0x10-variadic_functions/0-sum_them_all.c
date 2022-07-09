#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: the number of parameters being passed
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(val, n);
	for (i = 0; i < n; i++)
		sum += va_arg(val, int);
	va_end(val);
	return (sum);
}
