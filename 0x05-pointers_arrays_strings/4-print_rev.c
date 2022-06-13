#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @w: A pointer to an int that will be changed
 *
 * Return: Always 0
 */

void print_rev(char *w)
{
int q;
q = 0;
while (w[q] != '\0')
{
q++;
}
for (q = q - 1 ; q >= 0; q--)
{
_putchar (w[q]);
}
_putchar ('\n');
}
