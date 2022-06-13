#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
char *a;
int b;

a = str;
for (b = 0; a[b]; b++)
{
_putchar (a[b]);
}
{
_putchar('\n');
}
}
