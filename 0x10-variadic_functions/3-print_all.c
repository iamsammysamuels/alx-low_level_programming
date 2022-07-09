#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function prints anyting.
 * @format: list of type of arguments passed to the function.
 * Return: nothing
 */
 
 void print_all(const char * const format, ...)
{
	va_list val;
	char *str;
	int i = 0;

	va_start(val, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(val, int));
				break;
			case 'i':
				printf("%d", va_arg(val, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(val, double));
				break;
			case 's':
				str = va_arg(val, char*);
				if (temp != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(val);
	printf("\n");
}
