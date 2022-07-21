#include "main.h"

/**
 * power_operation - returns the natural sqaure root of a number
 * @x: input number
 * @c: iterator
 * Return: square root or -1.
 */
int power_operation(int x, int c)
{
	if (c % (x / c) == 0)
	{
		if (c * (x / c) == x)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(x, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @x: input number
 * Return: natural square root
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (x == 1)
		return (1);
	return (power_operation(n, 2));
}
