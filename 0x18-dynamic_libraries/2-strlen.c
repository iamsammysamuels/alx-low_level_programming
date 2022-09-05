#include "main.h"

#include <string.h>
/**
 * _strlen - checks the length of a string
 * @u:input
 *
 * Return: Always 0.
 */

int _strlen(char *u)
{
int length = 0;
while (*u != 0)
{
length++;
u++;
}
return (length);
}
