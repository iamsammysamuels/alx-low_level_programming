#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - function for format printing
 * @format: list of arguments to printing
 * Return: Number of characters to printing
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*rep)(va_list);
	unsigned int i = 0;
	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				write(1, &format[i + 1], 1);
				count++;
				i += 2;
				continue;
			}
			else
			{
				rep = checker(&format[i + 1]);
				if (rep == NULL)
					return (-1);
				i += 2;
				count += rep(args);
				continue;
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
