#include "main.h"

/**
 * prime_a - main - check the code
 * @a: an integer
 * @b: power
 * Return: Alwayso 0
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - A function that checks if a number is prime.
 * @n: number
 * Return: 1 if n is prime or  0 in otherwise
*/

int is_prime_number(int n)

{
	return (prime_a(n, 2));
}
