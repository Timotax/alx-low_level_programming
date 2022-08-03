#include "3-calc.h"

/**
 * op_add - Sum of a and b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a by b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the divison of a by b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: remainder of the divison
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
