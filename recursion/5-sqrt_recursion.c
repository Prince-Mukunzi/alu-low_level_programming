#include "main.h"

int find_sqrt(int n, int i);

/**
 * find_sqrt - recursively finds natural square root of a number
 * @n: number to find square root of
 * @i: current guess
 *
 * Return: natural square root, or -1 if not found
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}
