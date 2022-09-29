#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks whether number is divisible
 * @num: number to be checked
 * @div: the divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	else if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
