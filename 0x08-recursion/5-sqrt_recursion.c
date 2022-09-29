#include "main.h"

/**
 * find_sqrt - returns the natural square root of a number
 * @num: number to find square root
 * @root: the root to be tested
 *
 * Return: returns the square root otherwise -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	else if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to find square root
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
