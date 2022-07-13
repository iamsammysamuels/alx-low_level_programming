#include <stdarg.h>
#include "main.h"

/**
 * print_d - a function that prints an integer
 * @d: the integer to print
 *
 * Return: the number of digits printed
 */

int print_d(va_list d)
{
	int i = 100000000;
	int n;
	int count = 0;

	n = va_arg(d, int);
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		count++;
	}
	while (i)
	{
		if (n / i != 0)
		{
			_putchar((n / i) % 10 + '0');
			count++;
		}
		i /= 10;
	}
	return (count);
}
