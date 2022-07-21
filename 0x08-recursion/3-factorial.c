#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @x: input number
 * Return: factorial of the number.
 */
int factorial(int x)
{
	if (x < 0)
		return (-1);
	else if (x == 0)
		return (1);
	else
		return (x * factorial(x - 1));
}
