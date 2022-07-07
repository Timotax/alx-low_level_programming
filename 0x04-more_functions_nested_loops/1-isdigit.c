#include "main.h"

/**
 * _isdigit - Check for a digit (0 through 9)
 * @x: input number
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
