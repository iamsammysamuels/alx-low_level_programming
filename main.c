    

#include <limits.h>

#include <stdio.h>

#include "main.h"

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0
 *
 *     */

int main(void)
{
	int len;
	int len2;

	_printf("String:[%s]\n", "I am a string !");
       	_printf("Character:[%c]\n", 'H');
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Len:[%d]\n", len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Len:[%d]\n", len2);
	return 0;
}
