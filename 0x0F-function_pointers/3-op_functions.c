#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: the first number to add
 * @b: the second number to add
 * Return: the sum of a and b
 */
 
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracs two numbers
 * @a: the first number to subtract
 * @b: the second number to subtract from the first
 * Return: the difference of a and b
 */
 
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first number to multiply
 * @b: the second number to multiply
 * Return: the product of a and b
 */
 
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the first number to be divided, the dividend
 * @b: the second number to divide by, the divisor
 * Return: the quotient of a and b
 */
 
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two numbers and returns the remainder
 * @a: the first number to divided, the dividend
 * @b: the second number to be divided by, the divisor
 * Return: the remainder of the division of a and b
 */
 
int op_mod(int a, int b)
{
	return (a % b);
}
